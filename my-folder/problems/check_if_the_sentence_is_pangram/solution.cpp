class Solution {
public:
    bool checkIfPangram(string sentence) {
        array<char,26> alphabets;
        int pos = 0;
        for(char i = 'a'; i<='z'; i++){
            alphabets.at(pos++) = i;
        }
        for(auto it = sentence.begin(); it!=sentence.end(); it++){
            int index = *it - 'a';
            alphabets.at(index) = '\0';
        }
        for(auto it = alphabets.begin(); it!=alphabets.end(); it++){
            if(*it != '\0')
                return false;
        }
        return true;
    }
};