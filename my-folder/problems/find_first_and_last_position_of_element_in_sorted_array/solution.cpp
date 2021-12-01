class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto it1 = find(nums.begin(), nums.end(), target);
        if(it1 == nums.end())
            return {-1,-1};
        int index1 = it1 - nums.begin();
        auto it2 = find(nums.rbegin(),nums.rend(), target);
        int index2 = (nums.rend() - 1) - it2;
        return {index1, index2};
        
    }
};