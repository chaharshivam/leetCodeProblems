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
    vector<int> postorderTraversal(TreeNode* root) {
        if(root == NULL){
            vector<int> v;
            return v;
        }
        vector<int> v;
        vector<int> vleft = postorderTraversal(root->left);
        for(auto i:vleft)
            v.push_back(i);
        vector<int> vright = postorderTraversal(root->right);
        for(auto i:vright)
            v.push_back(i);
        v.push_back(root->val);
        return v;
    }
};