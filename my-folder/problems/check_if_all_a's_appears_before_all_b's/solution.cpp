class Solution {
public:
    bool checkString(string s) {
        bool seenB = false;
        auto it = s.begin();
        while(it!=s.end()){
            if(*it == 'b')
                seenB = true;
            else if(seenB){
                if(*it == 'a')
                    return false;
            }
            it++;
        }
        return true;
    }
};