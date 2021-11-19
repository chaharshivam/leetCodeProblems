class Solution {
public:
    int firstUniqChar(string s) {
        for(int i = 0; i<s.length(); i++){
            if(s[i] == '.')
                continue;
            bool rep = false;
            for(int j = i+1; j<s.length(); j++){
                if(s[j] == '.')
                    continue;
                if(s[j] == s[i]){
                    s[j] = '.';
                    rep = true;
                }
            }
            if(!rep)
                return i;
            
        }
        return -1;
    }
};