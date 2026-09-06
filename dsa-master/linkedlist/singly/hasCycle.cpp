
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
        if (i == 2)
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

bool hasCircle(Node *head)
{
    Node *fast = head;
    Node *slow = head;
    //{1, 2, 3, 4, 6}
    while (fast != NULL and fast->next != NULL)
    {
        slow = fast->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    // vector to linkedlist
    vector<int> arr = {3, 2, 0, -4};
    Node *head = convertToLL(arr);

    // print(head);
    cout << hasCircle(head);

    return 0;
}