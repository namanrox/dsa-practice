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
    int maximum = INT_MIN;
    int height(TreeNode* root) {
        if (root == NULL)
            return 0;
        int left = height(root->left);
        int right = height(root->right);
        return max(left, right) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if (root == NULL)
            return 0;
        int l = height(root->left);
        int r = height(root->right);
        maximum = max(maximum, l + r);
        l = diameterOfBinaryTree(root->left);
        r = diameterOfBinaryTree(root->right);
        return maximum;
    }
};