class Solution {
public:
    int good(TreeNode*&root,int maxAbove){
        if(!root){
            return 0;
        }
        int ans=0;
        if(maxAbove<=root->val){
            maxAbove=root->val;
            ans++;
        }
        return ans+good(root->left,maxAbove)+good(root->right,maxAbove);
    }
    int goodNodes(TreeNode* root) {
        return good(root,-1e5);
    }
};