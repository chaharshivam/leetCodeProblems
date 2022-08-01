class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int col=matrix[0].size()-1;
    int row=matrix.size()-1;
    // solve just keeping condition for top right most element
    //suppose we start with right most top most element
    int i=0,j=col;
    while(i<=row && j>=0){
        if(matrix[i][j] ==target){
            return true;
        }
        //if curr element is less than target then we move the curr to next row
        else if(matrix[i][j]<target){
            i++;
        }
        // when curr is greater thaan target then we decrease the col by 1
        else{
            j--;
        }
    }
    return false;
}
};