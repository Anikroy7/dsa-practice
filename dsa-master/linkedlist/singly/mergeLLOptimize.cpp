
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
    if (arr.size() < 1)
        return NULL;
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
/*
{1, 2, 4};
 {1}
*/
Node *mergedLL(Node *headOne, Node *headTwo)
{
    Node *temp1 = headOne; // 1
    Node *temp2 = headTwo; // 1 3
    Node *newHead = NULL;  // 1  // 1 1

    Node *newTail = NULL; // 1

    if (temp1 == NULL and temp2 == NULL)
        return {};

    while (temp1 != NULL and temp2 != NULL)
    {

        if (newHead == NULL)
        {
            if (temp1->value < temp2->value)
            {
                Node *newNode = new Node(temp1->value);
                newHead = newNode;
                newTail = newNode;
                temp1 = temp1->next;
            }
            else
            {
                Node *newNode = new Node(temp2->value);
                newHead = newNode;
                newTail = newNode;
                temp2 = temp2->next;
            }
            continue;
        }

        if (temp1->value < temp2->value)
        {
            Node *newNode = new Node(temp1->value);
            newTail->next = newNode;
            newTail = newTail->next;
            temp1 = temp1->next;
        }
        else
        {
            Node *newNode = new Node(temp2->value);
            newTail->next = newNode;
            newTail = newTail->next;
            temp2 = temp2->next;
        }
    }

    while (temp1 != NULL)
    {
        if (newHead == NULL)
        {
            Node *newNode = new Node(temp1->value);
            newHead = newNode;
            newTail = newNode;
            temp1 = temp1->next;
        }
        else
        {
            Node *newNode = new Node(temp1->value);
            newTail->next = newNode;
            newTail = newTail->next;
            temp1 = temp1->next;
        }
    }

    while (temp2 != NULL)
    {
        if (newHead == NULL)
        {
            Node *newNode = new Node(temp2->value);
            newHead = newNode;
            newTail = newNode;
            temp2 = temp2->next;
        }
        else
        {
            Node *newNode = new Node(temp2->value);
            newTail->next = newNode;
            newTail = newTail->next;
            temp2 = temp2->next;
        }
    }

    return newHead;
}
int main()
{
    // vector to linkedlist
    vector<int> arr = {1, 2, 2, 3, 4, 5};
    vector<int> arr2 = {3, 5, 5, 7, 7};
    Node *l1Head = convertToLL(arr);

    Node *l2Head = convertToLL(arr2);

    // slove but show memory limit exceded
    Node *mergedHead = mergedLL(l1Head, l2Head);
    print(mergedHead);
    cout << endl;

    return 0;
}