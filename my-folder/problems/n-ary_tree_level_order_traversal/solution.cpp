class Solution {
public:
    vector<vector<int>> ret;
    int size = 0;
    vector<vector<int>> levelOrder(Node* root) {
        if(!root) return ret;
        
        search(root, 0);
        return ret;
    }
    
    void search(Node* node, int lvl)
    {
        if(size == lvl) 
        {
            ret.push_back({node->val});
            size++;
        }
        else
            ret[lvl].push_back(node->val);
        
        for(auto it : node->children)
            search(it, lvl+1);
    }
};