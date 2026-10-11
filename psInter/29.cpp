
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

void solve(TreeNode *root, int k, int &count, int &res)
{
    if (root == NULL)
        return;

    solve(root->left, k, count, res);
    count++;
    if (count == k)
    {
        res = root->data;
        return;
    }
    solve(root->right, k, count, res);
}
int kthSmallest(TreeNode *root, int k)
{
    int res = -1;
    int count = 0;
    solve(root, k, count, res);
    return res;
}