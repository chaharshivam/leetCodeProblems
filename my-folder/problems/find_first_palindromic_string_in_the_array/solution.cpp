class Solution {
public:
    bool isPalindrome(string word){
        for(auto it = word.begin(), ite = word.end() - 1; it<=ite; it++, ite--){
            if(*it != *ite)
                return false;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto it = words.begin(); it!=words.end(); it++){
            if(isPalindrome(*it))
                return *it;
        }
        return "";
    }
};