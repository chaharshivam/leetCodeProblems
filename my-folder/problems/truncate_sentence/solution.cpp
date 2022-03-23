class Solution {
public:
    string truncateSentence(string s, int k) {
        int spaces = 0;
        auto it = s.begin();
        for(; it != s.end(); it++){
            if(isspace(*it)){
                spaces++;
            }
            if(spaces == k){
                break;
            }
        }
        s.erase(it, s.end());
        return s;
    }
};