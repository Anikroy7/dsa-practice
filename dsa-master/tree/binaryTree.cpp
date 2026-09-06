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
    root->right = new TreeNode(2);
    root->right->right = new TreeNode(3);
    root->left->left = new TreeNode(3);
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

void preOrder(TreeNode *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(TreeNode *root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
void postOrder(TreeNode *root)
{
    if (root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

bool invertTra(TreeNode *r1, TreeNode *r2)
{
    if (r1 == NULL && r2 == NULL)
        return true;

    if (r1 == NULL || r2 == NULL)
        return false;

    if (r1->data != r2->data)
        return false;

    bool res1 = invertTra(r1->left, r2->right);
    bool res2 = invertTra(r1->right, r2->left);

    return res1 && res2;
}

bool isInvert(TreeNode *root)
{
    if (root == NULL)
        return true;

    return invertTra(root->left, root->right);
}

bool isInvert(TreeNode *root)
{
    if (root->left != root->right)
        return false;

    return invertTra(root->left, root->right);
}

main()
{
    TreeNode *root = binaryTree();
    cout << isInvert(root);
    return 0;
}