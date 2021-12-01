class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        auto it = nums.begin();
        while(it!=nums.end()){
            if(st.count(*it) > 0)
                return true;
            else
                st.insert(*it);
            it++;
        }
        return false;
    }
};