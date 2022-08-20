class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        int end = nums.size() - 1;
        for(int i = 0; i<nums.size() - 2; i++){
            int start = i + 1;
            int endInner = end;
            int target = -nums[i];
            if(i > 0 && nums[i] == nums[i-1])continue;
            while(start < endInner){
                vector<int> vec;
                int sum = nums[start] + nums[endInner];
                if(sum == target){
                    vec.push_back(nums[i]);
                    vec.push_back(nums[start]);
                    vec.push_back(nums[endInner]);
                    res.push_back(vec);
                    endInner--;
                    start++;
                while(nums[start] == nums[start-1] && start < endInner)++start;
                while(nums[endInner] == nums[endInner+1] && start < endInner) --endInner;
                }
                else if(sum > target){
                    endInner--;
                }
                else
                    start++;
            }
        }
        return res;
    }
};