class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> s;
        for(auto it=nums.begin(); it!=nums.end(); it++){
            s.insert(*it);
        }
        int i = 1;
        for(auto it = s.begin(); it != s.end(); it++, i++){
            if(s.count(i) > 0){
                continue;
            }
            break;
        }
        return i;
    }
};