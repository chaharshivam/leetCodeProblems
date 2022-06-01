class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        if(nums.empty())
            return {};
        vector<int> runningSum;
        int sum = 0;
        for(auto i : nums){
            sum = sum + i;
            runningSum.push_back(sum);
        }
        return runningSum;
    }
};