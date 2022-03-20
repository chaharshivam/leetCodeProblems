class Solution {
public:
    int maxArea(vector<int>& height) {
        // o(n^2) solution
        // int maxAmt = INT_MIN;
        // for(int i = 0; i<height.size() - 1; i++){
        //     for(int j = i+1; j<height.size(); j++){
        //         int minBar = min(height[i],height[j]);
        //         int amt = minBar * (j-i);
        //         maxAmt = max(maxAmt, amt);
        //     }
        // }
        // return maxAmt;

        int maxAmt = INT_MIN;
        for(auto it = height.begin(), itr = height.end() - 1; it<=itr; ){
            int mini = min(*it,*itr);
            int amt = mini * abs(it - itr);
            maxAmt = max(maxAmt, amt);
            if(*it > *itr){
                itr--;
            }
            else{
                it++;
            }
        }
        return maxAmt;
    }
};