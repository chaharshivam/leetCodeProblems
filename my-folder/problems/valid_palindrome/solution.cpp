class Solution {
public:
    
    bool isPalindrome(string s) {
        string snew;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(auto it = s.begin(); it!=s.end();it++){
            if(isalnum(*it))
                snew+=*it;
        }
        for(int i = 0, j = snew.length()-1; i<=j; i++, j--){
            if(snew[i] != snew[j])
                return false;
        }
        return true;
    }
};