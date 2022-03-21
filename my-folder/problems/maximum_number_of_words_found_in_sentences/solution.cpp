class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWord = INT_MIN;
        for(auto s : sentences){
            int count = 0;
            for(auto it = s.begin(); it!=s.end(); it++){
                if(isspace(*it))
                    count++;
            }
            maxWord = max(maxWord, count + 1);
        }
        return maxWord;
    }
};