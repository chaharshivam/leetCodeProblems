class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row = mat.size();
        int col = mat[0].size();
        if((row*col) != (r*c)) return mat;
        
        int row_nums = 0;
        int col_nums = 0;
        vector<vector<int>> v;
        vector<int> temp;
        for(int i = 0; i<row; i++){
            for(int j = 0; j<col; j++){
                temp.push_back(mat[i][j]);
                col_nums++;
                if(col_nums == c){
                    v.push_back(temp);
                    temp.clear();
                    col_nums=0;
                }
            }
        }
        return v;
        
    }
};