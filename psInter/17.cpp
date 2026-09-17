
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
Node *middleNode(Node *head)
{
    Node *fast = head;
    Node *slow = head;

    while (fast != NULL and fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

int main()
{
    // vector to linkedlist
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    Node *head = convertToLL(arr);
    Node *middle = middleNode(head);
    cout << middle->value;

    return 0;
}