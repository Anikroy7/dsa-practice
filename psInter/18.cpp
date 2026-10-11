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

TreeNode *converNumberToTree(vector<int> &nums, int start, int end)
{
    if (start > end)
        return NULL;

    int mid = start + (end - start) / 2;

    TreeNode *root = new TreeNode(nums[mid]);
    root->left = converNumberToTree(nums, start, mid - 1);
    root->right = converNumberToTree(nums, mid + 1, end);

    return root;
}

main()
{
    vector<int> nums = {-10, -3, 0, 5, 9};
    TreeNode *root = converNumberToTree(nums, 0, nums.size() - 1);
    // cout << isInvert(root);
    print(root);
    return 0;
}