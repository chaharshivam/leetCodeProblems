class Solution {
public:
    int lengthOfLastWord(string s) {
        int lastIndex = s.length() - 1;
        int count = 0;
        bool lastEnd = false;
        for(int i=lastIndex; i>=0; i--){
            if(s[i] == ' '){
                if(lastEnd)
                    break;
                continue;
            }
            count++;
            lastEnd = true;
        }
        return count;
    }
};