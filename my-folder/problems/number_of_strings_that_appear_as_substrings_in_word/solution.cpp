class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count = 0;
        for(auto it = patterns.begin(); it!=patterns.end(); it++){
            if(word.find(*it) != string::npos)
                count++;
        }
        return count;
    }
};