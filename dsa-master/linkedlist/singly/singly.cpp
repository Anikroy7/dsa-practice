
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

int main()
{
    // vector to linkedlist
    vector<int> arr = {4, 6, 9, 7};
    Node *head = convertToLL(arr);

    // delete head
    //  head = deleteHeadOfLL(head);

    // delete tail
    head = deleteTailOfLL(head);

    print(head);

    return 0;
}