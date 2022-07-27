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
    void preorderTraversal(TreeNode* root, vector<TreeNode*>& vecTree){
        if(root == NULL)
            return;
        vecTree.push_back(root);
        if(root->left!=NULL)
            preorderTraversal(root->left,vecTree);
        if(root->right!=NULL)
            preorderTraversal(root->right,vecTree);
    }
    void flatten(TreeNode* root) {
        vector<TreeNode*> vecTree;
        preorderTraversal(root,vecTree);
        for(int i = 0; i<(int)(vecTree.size() - 1); i++){
            vecTree[i]->left = NULL;
            vecTree[i]->right = vecTree[i+1];
        }
        if(vecTree.size() == 0){
            root = NULL;
        }
        else
            root = vecTree[0];
    }
};