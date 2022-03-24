class Solution {
public:
    string reversePrefix(string word, char ch) {
        int index = word.find_first_of(ch);
        reverse(word.begin(), word.begin() + index + 1);
        return word;
    }
};