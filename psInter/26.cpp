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
    TreeNode *root = new TreeNode(5);

    root->left = new TreeNode(1);
    root->right = new TreeNode(7);

    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(9);

    return root;
}
void print(TreeNode *root, vector<int> &nums)
{
    if (root == NULL)
        return;
    print(root->left, nums);
    nums.push_back(root->data);
    print(root->right, nums);
}

int main()
{

    vector<int> nums;
    TreeNode *root = binaryTree();
    print(root, nums);

    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i + 1] <= nums[i])
        {
            cout << "fasle";
            return 0;
        }
    }
    return 0;
}