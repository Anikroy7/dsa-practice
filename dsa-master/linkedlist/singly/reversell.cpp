
#include <bits/stdc++.h>
using namespace std;

struct Node
{

    int value;
    Node *next;

    Node(int data)
    {
        value = data;
        next = nullptr;
    };
};

void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}

Node *convertToLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *temp = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *newNode = new Node(arr[i]);
        head->next = newNode;
        head = newNode;
    }

    return temp;
}

Node *deleteHeadOfLL(Node *head)
{
    if (head == NULL)
        return head;
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node *deleteTailOfLL(Node *head)
{

    if (head == NULL || head->next == NULL)
        return head;
    Node *temp = head; // 9

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete (temp->next);
    temp->next = NULL;

    return head;
}

//  {4, 6, 9, 7}; // itarative way
Node *reverseLLIT(Node *head)
{

    Node *temp = head;
    Node *prev = nullptr;

    while (temp != nullptr)
    {
        Node *front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }

    return prev;
}

//{4, 6, 9, 7} // n, 7->9->null
Node *reveseLLRec(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node *newHead = reveseLLRec(head->next);

    Node *front = head->next;
    front->next = head;
    head->next = nullptr;
    return newHead;
}

Node *middleOFLL(Node *head) //{1, 2, 3, 4, 5, 6}
{
    Node *slow = head; // 1 2 3 4
    Node *fast = head; // 1 3 5 null

    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

int main()
{
    // vector to linkedlist
    vector<int> arr = {1, 2, 3, 4,6};
    Node *head = convertToLL(arr);

    // delete head
    //  head = deleteHeadOfLL(head);

    // delete tail
    // head = deleteTailOfLL(head);

    // reverse itarative way ll
    //  head= reverseLLIT(head);

    // revese recursive way
    // head = reveseLLRec(head);

    // middle of a linked list
    Node *middle = middleOFLL(head);
    cout << "middle: " << middle->value << endl;

    print(head);

    return 0;
}