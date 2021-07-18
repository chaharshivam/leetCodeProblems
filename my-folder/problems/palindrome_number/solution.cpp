class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        string s = to_string(x);
        int len = s.length();
        for(int i = 0, j = len - 1; i <= j ; i++,j--){
            if(s[i] != s[j])
                return false;
        }
        return true;
    }
};