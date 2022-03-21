class Solution {
public:
    string sortSentence(string s) {
        array<string,10> sentence;
        string str;
        for(auto it = s.begin(); it!=s.end(); it++){
            if(!isdigit(*it)){
                if(!isspace(*it))
                str += *it;
            }
            else{
                int index = *it - '0';
                sentence.at(index) = str;
                str.clear();
            }
        }
        string sen;
        for(int i = 1; i<sentence.size(); i++){
            if(!(sentence.at(i) == "")){
                sen += sentence.at(i) + " ";
            }
        }
        sen.pop_back();
        return sen;
    }
};