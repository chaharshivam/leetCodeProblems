class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        for(auto it = words.begin(); it!=words.end(); it++){
            int index = (*it).find(pref);
            if(index != string::npos){
                if(index == 0){
                    count++;
                }
            }
        }
        return count;
    }
};