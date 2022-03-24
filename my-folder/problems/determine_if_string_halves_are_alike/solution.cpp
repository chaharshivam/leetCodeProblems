class Solution {
public:
    bool halvesAreAlike(string s) {
        int vowels1 = 0;
        int vowels2 = 0;
        string str1 = s.substr(0,s.size()/2);
        string str2 = s.substr(s.size()/2, s.size());
        for(auto it = str1.begin(); it!=str1.end(); it++){
            char ch = tolower(*it);
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels1++;
        }
        for(auto it = str2.begin(); it!=str2.end(); it++){
            char ch = tolower(*it);
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels2++;
        }

        if(vowels1 == vowels2)
            return true;
        return false;
    }
};