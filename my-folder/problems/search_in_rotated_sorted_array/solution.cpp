class Solution {
public:
    int search(vector<int>& nums, int target) {
        unordered_map<int,int> ourmap;
        int index = 0;
        for(auto it = nums.begin(); it != nums.end(); it++){
            pair<int,int> p;
            p.first = *it;
            p.second = index;
            ourmap.insert(p);
            index++;
        }
        if(ourmap.count(target) > 0)
            return ourmap.find(target)->second;
        else
            return -1;
    }
};