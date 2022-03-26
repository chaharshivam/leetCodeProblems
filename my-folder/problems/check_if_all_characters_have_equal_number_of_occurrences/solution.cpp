class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> map;
        for(auto it = s.begin(); it!=s.end(); it++){
            map[*it]++;
        }
        auto s1 = map.begin()->second;
        for(auto s : map){
            if(s.second != s1){
                return false;
            }
        }
        return true;
    }
};