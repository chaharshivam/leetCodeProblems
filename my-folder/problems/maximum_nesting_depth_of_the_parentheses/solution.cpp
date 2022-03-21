class Solution {
public:
    int maxDepth(string s) {
        int maxCount = 0;
        int opening = 0;
        for(auto it = s.begin(); it!=s.end(); it++){
            if(*it == '('){
                opening++;
            }
            else if(*it == ')'){
                opening--;
            }
            maxCount = max(maxCount, opening);
        }
        return maxCount;
    }
};