class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int i = 0;
        int size = nums.size();
        while(i<size){
            nums.push_back(nums[i]);
            i++;
        }
        return nums;
    }
};