class Solution {
public:
    void reverseString(vector<char>& s) {
        auto it = s.begin();
        auto itr = s.end()-1;
        while(it<=itr){
            char temp = *it;
            *it = *itr;
            *itr = temp;
            it++;
            itr--;
        }
    }
};