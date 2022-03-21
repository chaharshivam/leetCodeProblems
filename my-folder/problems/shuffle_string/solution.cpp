class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        char* arr = new char[s.size()];
        for(int i = 0; i<s.size(); i++){
            arr[indices[i]] = s[i];
        }
        string str;
        for(int i = 0; i<s.size(); i++){
            str += arr[i];
        }
        return str;
    }
};