class Solution {
    int minl = 100000;
    void vot(TreeNode* root,int line,int height,unordered_map<int,multiset<pair<int,int>>> &mp){
        mp[line].insert({height,root->val});
        minl = min(minl,line);
        if(root->left)vot(root->left,line-1,height+1,mp);
        if(root->right)vot(root->right,line+1,height+1,mp);
    }
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        unordered_map<int,multiset<pair<int,int>>> mp;
        vot(root,0,0,mp);
        vector<vector<int>> ans;
        while(mp.find(minl) != mp.end()){
            vector<int> v;
            for(auto j:mp[minl++]) v.push_back(j.second);
            ans.push_back(v);
        } return ans;
    }
};