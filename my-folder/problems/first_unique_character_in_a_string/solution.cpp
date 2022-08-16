class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<int,int> ourmap;
        for(int i = 0; i<s.length(); i++){
            ourmap[s[i]]++;
        }
        for(int i = 0; i<s.length(); i++){
            if(ourmap[s[i]] == 1)
                return i;
        }
        return -1;
    }
};