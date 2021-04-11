/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        } else if (root->left == nullptr && root->right == nullptr) {
            return 1;
        } else {
            return maxDepth(root, 1);
        }
    }
    
    int maxDepth(TreeNode* root, int curMax) {
        if (root->left == nullptr && root->right == nullptr) {
            return curMax;
        } else if (root->left == nullptr) {
            return maxDepth(root->right, 1+curMax);
        } else if (root->right == nullptr) {
            return maxDepth(root->left, 1+curMax);
        } else {
            return max(maxDepth(root->right, curMax+1), maxDepth(root->left, curMax+1)); 
        }
    }
};
