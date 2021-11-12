class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> mnarray;
        int count = 0;
        if(original.size() != (m*n))
            return mnarray;
        for(int i = 0; i<m ;i++){
             vector<int> v;
            for(int j = 0; j<n; j++){
                v.push_back(original.at(count));
                count++;
            }
            mnarray.push_back(v);
            
        }
        return mnarray;
    }
};