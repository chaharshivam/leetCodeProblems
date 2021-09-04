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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        if(root == NULL){
            return v;
        }
        vector<int> vleft = inorderTraversal(root->left);
        for(auto it = vleft.begin(); it!=vleft.end(); it++){
            v.push_back(*it);
        }
        v.push_back(root->val);
        vector<int> vright = inorderTraversal(root->right);
        for(auto it = vright.begin(); it!=vright.end(); it++){
            v.push_back(*it);
        }
        return v;
    }
};