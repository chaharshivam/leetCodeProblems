class Solution {
public:
    string toLowerCase(string s) {
        for(auto it = s.begin(); it!=s.end(); it++){
            if(isupper(*it)){
                *it = tolower(*it);
            }
        }
        return s;
    }
};