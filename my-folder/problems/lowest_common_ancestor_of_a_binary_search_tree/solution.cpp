class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == p || root == q) 
            return root;
        
        if(root->val > p->val && root->val > q->val)
            return lowestCommonAncestor(root->left, p, q);
        
        if(root->val < p->val && root->val < q->val)
            return lowestCommonAncestor(root->right, p, q);
        
        return root;
    }
};