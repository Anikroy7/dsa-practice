
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
    if (headOne == NULL and headTwo == NULL)
        return NULL;


}

int main()
{
    // vector to linkedlist
    vector<int> arr = {1, 3, 5};
    vector<int> arr2 = {2, 4};
    Node *l1Head = convertToLL(arr);

    Node *l2Head = convertToLL(arr2);

    // slove but show memory limit exceded
    Node *mergedHead = mergedLL(l1Head, l2Head);
    print(mergedHead);
    cout << endl;

    return 0;
}