class Solution {
public:
    int balancedStringSplit(string s) {
        stack<char> stk;
        int count = 0;
        for(auto it = s.begin(); it!=s.end(); it++){
            if(stk.empty()){
                stk.push(*it);
                continue;
            }
            if(*it == 'L'){
                if(stk.top() == 'R')
                    stk.pop();
                else
                    stk.push('L');
            }
            else{
                if(stk.top() == 'L')
                    stk.pop();
                else
                    stk.push('R');
            }
            if(stk.empty())
                count++;
        }
        return count;
    }
};