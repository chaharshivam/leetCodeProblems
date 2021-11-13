class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        auto it = nums.begin();
        while(it!=nums.end()){
           auto it1 = find(it+1, nums.end(), *it);
            if(it1 != nums.end())
                return true;
            it++;
        }
        return false;
    }
};