class Solution {
public:
    int numericalValue(string word){
        string str;
        for(auto it = word.begin(); it!=word.end(); it++){
            str+= to_string((*it) - 'a');
            
        }
        return stoi(str);
    }
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int first = numericalValue(firstWord);
        int second = numericalValue(secondWord);
        int third = numericalValue(targetWord);
        return (first + second) == third;
    }
};