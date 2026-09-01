
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
    Node *circle;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *newNode = new Node(arr[i]);
        head->next = newNode;
        head = newNode;
        if (i == 3)
        {
            circle = newNode;
        }
        if (i == arr.size() - 1)
        {
            newNode->next = circle;
        }
    }

    return temp;
}

bool hasCycle(Node *head)
{

    Node *slow = head;
    Node *fast = head;

    while (fast != NULL and fast->next != NULL)
    {
        cout << fast->value << " " << slow->value << endl;
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    // vector to linkedlist
    vector<int> arr = {1, 2, 3, 4, 6, 3};
    Node *head = convertToLL(arr);

    if (!hasCycle(head))
    {
        print(head);
    }
    else
    {
        cout << "ha ace";
    }

    return 0;
}