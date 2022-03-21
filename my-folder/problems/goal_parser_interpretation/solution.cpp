class Solution {
public:
    string interpret(string command) {
        string str;
        for(auto it = command.begin(); it != command.end(); it++){
            if(*it == 'G'){
                str += 'G';
            }
            else if(*it == '('){
                if(*(++it) == ')')
                    str += 'o';
                else{
                    str += "al";
                    it = it + 2;
                }
            }
        }
        return str;
    }
};