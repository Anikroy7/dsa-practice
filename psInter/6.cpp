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
    TreeNode *root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);

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

bool invertTre(TreeNode *r1, TreeNode *r2)
{
    if (r1 == NULL and r2 == NULL)
        return true;
    if (r1 == NULL || r2 == NULL)
        return false;
    if (r1->data != r2->data)
        return false;

    bool res1 = invertTre(r1->left, r2->right);
    bool res2 = invertTre(r1->right, r2->left);
    return (res1 and res2);
}

bool isInvert(TreeNode *root)
{
    if (root == NULL)
        return true;

    return invertTre(root->left, root->right);
}

void invertOrder(TreeNode *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    invertOrder(root->right);
    invertOrder(root->left);
}
main()
{
    TreeNode *root = binaryTree();
    // cout << isInvert(root);
    invertOrder(root);
    return 0;
}