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
    bool isValidBST(TreeNode* root, long nmin = LONG_MIN, long nmax = LONG_MAX) {
        if (!root) {
            return true;
        } else if (root->val <= nmin || root->val >= nmax) {
            return false;
        }
        
        return isValidBST(root->left, nmin, root->val) && isValidBST(root->right, root->val, nmax);
    }
};