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
    TreeNode* constructBST(vector<int>& v, int si, int ei){
        if(si>ei)
            return NULL;
        int mid = (si+ei)/2;
        TreeNode* root = new TreeNode(v[mid]);
        root->left = constructBST(v,si, mid-1);
        root->right = constructBST(v, mid+1, ei);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return constructBST(nums, 0, nums.size()-1);
    }
};