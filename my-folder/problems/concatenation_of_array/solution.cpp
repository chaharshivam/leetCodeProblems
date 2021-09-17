class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int* ans = new int[2*(nums.size())];
        for(int i = 0; i<nums.size(); i++){
            ans[i] = nums[i];
            ans[i+(nums.size())] = nums[i];
        }
        vector<int> v;
        for(int i = 0; i<(2*nums.size()); i++){
            v.push_back(ans[i]);
        }
        return v;
    }
};