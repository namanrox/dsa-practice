/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sort(vector<int>& n, int i, int j) {
        if (i > j)
            return NULL;
        int mid = (i + j) / 2;
        TreeNode* root = new TreeNode(n[mid]);
        root->left = sort(n, i, mid - 1);
        root->right = sort(n, mid + 1, j);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* temp = sort(nums, 0, nums.size() - 1);
        return temp;
    }
};