#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    };
};

TreeNode *binaryTree()
{
    TreeNode *root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right->right = new TreeNode(9);
    root->right->left = new TreeNode(6);
    return root;
}

void print(TreeNode *root)
{
    stack<TreeNode *> st;
    st.push(root);
    while (!st.empty())
    {
        TreeNode *curr = st.top();
        cout << curr->data << " ";
        st.pop();
        if (curr->left != NULL)
        {
            st.push(curr->left);
        }
        if (curr->right != NULL)
        {
            st.push(curr->right);
        }
    }
}

bool compare(TreeNode *t1, TreeNode *t2)
{

    if (t1 == NULL and t2 == NULL)
    {
        return true;
    }
    if (t1 == NULL or t2 == NULL)
        return false;

    if (t1->data != t2->data)
        return false;
    bool r1 = compare(t1->left, t2->right);
    bool r2 = compare(t1->right, t2->left);
    return r1 and r2;
}

int main()
{

    TreeNode *root = binaryTree();
    if (root->left == NULL and root->right == NULL)
        return true;

    TreeNode *leftTree = root->left;
    TreeNode *rightTree = root->right;
    cout << compare(leftTree, rightTree);

    return 0;
}