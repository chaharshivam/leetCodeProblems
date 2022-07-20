class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //O(nlogn);
        // sort(nums.begin(), nums.end());
        // int i = 0;
        // for(; i<nums.size(); i++){
        //     if(nums[i] != i)
        //         break;
        // }
        // return i;
        
        //O(n);
        int sumNums = 0;
        for(int i = 0; i<nums.size(); i++){
            sumNums+=nums.at(i);
        }
        int sumRange = 0;
        for(int i = 0; i<nums.size() + 1; i++){
            sumRange += i;
        }
        return sumRange - sumNums;
    }
};