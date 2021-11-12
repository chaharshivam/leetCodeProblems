/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
        TreeNode* root = new TreeNode(v.at(mid));
        root->left = constructBST(v, si, mid-1);
        root->right = constructBST(v, mid+1, ei);
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> v;
        ListNode* temp = head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        return constructBST(v,0,v.size()-1);
    }
};