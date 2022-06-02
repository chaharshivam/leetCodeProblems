class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> transposed;
        int stop = matrix.at(0).size();
        int count = 0;
        while(count<stop){
            vector<int> temp;
            for(auto i : matrix){
                temp.push_back(i.at(count));
            }
            transposed.push_back(temp);
            count++;
        }
        return transposed;
    }
};