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
    TreeNode* constructBST(int start, int end, vector<int>& nums){
        if(start > end){
            return NULL;
        }
        int mid = (start + end)/2;
        TreeNode* root = new TreeNode(nums.at(mid));
        root->left = constructBST(start, mid - 1, nums);
        root->right = constructBST(mid + 1, end, nums);
        return root;
        
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return constructBST(0,nums.size()-1, nums);
    }
};