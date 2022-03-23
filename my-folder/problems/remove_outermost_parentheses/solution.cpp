class Solution {
public:
    string removeOuterParentheses(string s) {
        vector<string> strvec;
        stack<char> stk;
        string str;
        for(auto it = s.begin(); it!=s.end(); it++){
            if(*it == '('){
                stk.push(*it);
                str+=*it;
            }
            else{
                if(stk.top() == '('){
                    stk.pop();
                    str+=*it;
                }
            }
            if(stk.empty()){
                strvec.push_back(str);
                str.clear();
            }
        }
        string finalstr;
        for(auto s : strvec){
            s.erase(s.begin());
            s.erase(s.end() - 1);
            finalstr += s;
        }
        return finalstr;
    }
};