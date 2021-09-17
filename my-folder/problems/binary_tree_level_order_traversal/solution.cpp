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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == NULL){
            vector<vector<int>> ve;
            return ve;
        }
        queue<TreeNode*> pendingNodes;
        pendingNodes.push(root);
        pendingNodes.push(NULL);
        vector<vector<int>> v;
        vector<int> vsub;
        while(!pendingNodes.empty()){
            TreeNode* front = pendingNodes.front();
            pendingNodes.pop();
            if(pendingNodes.empty()){
                break;
            }
            if(front == NULL){
                pendingNodes.push(NULL);
                v.push_back(vsub);
                vsub.clear();
                continue;
            }
            vsub.push_back(front->val);
            if(front->left != NULL)
                pendingNodes.push(front->left);
            if(front->right != NULL)
                pendingNodes.push(front->right);
        }
        v.push_back(vsub);
        return v;
    }
};