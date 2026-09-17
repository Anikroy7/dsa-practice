
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

Node *reverseLL(Node *head)
{

    Node *temp = head;
    Node *prev = NULL;

    while (temp != NULL)
    {
        Node *front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
}

int main()
{
    // vector to linkedlist

    vector<int> arr = {4, 6, 9, 7};
    //  1 0 0 0
    /*
    2, 2, 1, 1, 1, 2, 2
    1  2  1  0  1  0  1
    2, 3, 2, 3, 4 1 1 1 1 1 1
    1  0  1  0  1 0 1 2 3 4 5
    */
    Node *head = convertToLL(arr);
    head = reverseLL(head);
    print(head);

    return 0;
}