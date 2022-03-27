class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string str;
        auto it1 = word1.begin();
        auto it2 = word2.begin();
        bool oscillate = true;
        for(;it1 != word1.end() && it2 != word2.end(); ){
            if(oscillate){
                str+=*it1;
                it1++;
                oscillate = false;
            }
            else{
                str+=*it2;
                it2++;
                oscillate = true;
            }
        }
        while(it1!=word1.end()){
            str+=*it1;
            it1++;
        }
        while(it2!=word2.end()){
            str+=*it2;
            it2++;
        }
        return str;
    }
};