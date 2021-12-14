class Solution {
public:
    bool isValid(string s) {
        
        stack<char> st;
        
        for(int i=0; i<s.size(); i++){
            
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){      //if opening bracket then, push
                st.push(s[i]);
            }
            else if(s[i]==')'){                             //if closing bracket
                if(!st.empty() && st.top()=='('){      //check if stack is not empty and top of stack is the correspoding opening bracket
                    st.pop();                 //if yes, then, simply pop that opening bracket
                }
                else{
                    return false;         //otherwise, return false as there was a mismatch
                }
            }
            else if(s[i]==']'){                   //same goes with these 2 below brackets also 
                if(!st.empty() && st.top()=='['){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else if(s[i]=='}'){
                if(!st.empty() && st.top()=='{'){
                    st.pop();
                }
                else{
                    return false;
                }
            }  
        }
        
        if(!st.empty()){            //if stack is not empty, that means any opening brackets remains in that
            return false;           //so, return false, as it is not balanced
        }
        return true;               //Otherwise, return true, as everthing was OK
    }
};