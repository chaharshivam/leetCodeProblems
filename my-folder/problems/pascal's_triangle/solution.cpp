class Solution {
public:
    vector<vector<int>> generate(int numRows) {
   vector<vector<int>> ans;
		for(int i = 0 ; i < numRows; i++){
			vector<int> x(i+1,1);
			for(int j = 1; j <= ceil((i)/2); j++){
				x[j] = x[i-j] = ans[i-1][j-1]+ ans[i-1][j];
			}
			ans.push_back(x);
		}
		return ans;
    }
};