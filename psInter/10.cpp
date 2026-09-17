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
int maxDepth(TreeNode *root)
{

    if (root == NULL)
        return 0;
    int lh = maxDepth(root->left);
    int rh = maxDepth(root->right);

    return 1 + max(lh, rh);
}

main()
{
    TreeNode *root = binaryTree();
    // cout << isInvert(root);
    cout << maxDepth(root);
    return 0;
}