class Solution {
public:
    string replaceDigits(string s) {
        char ch;
        for(auto it = s.begin(); it!=s.end();it++){
            if(isdigit(*it)){
                *it = ch + (*it - '0');
            }
            else{
                ch = *it;
            }
        }
        return s;
    }
};