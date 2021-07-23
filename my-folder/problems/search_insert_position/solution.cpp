class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums.empty())
            return 0;
        int i = 0;
        while(i<nums.size()){
            if(nums[i] == target)
                return i;
            i++;
        }
        i = 0;
        while(i<nums.size()){
            if(nums[i] > target)
                return i;
            i++;
        }
        return nums.size();
    }
};