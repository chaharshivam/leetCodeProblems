class Solution {
public:
    string reverseWords(string s) {
        vector<string> strvec;
        string str;
        for(auto it = s.begin(); it!=s.end(); it++){
            if(isspace(*it)){
                strvec.push_back(str);
                str.clear();
            }
            else{
                str+=*it;
            }
            if(it == s.end() - 1){
                strvec.push_back(str);
            }
        }
        string finalstr;
        for(auto s : strvec){
            reverse(s.begin(), s.end());
            finalstr+=s + " ";
        }
        finalstr.pop_back();
        return finalstr;
    }
};