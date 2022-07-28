class Solution {
public:
    bool isAnagram(string s, string r) {
        int arr[26];
        for(int i = 0; i<26; i++){
            arr[i] = 0;
        }
        for(int i = 0; i<s.size(); i++){
            int idx = s[i] - 'a';
            arr[idx]++;
        }
        for(int i = 0; i<r.size(); i++){
            int idx = r[i] - 'a';
            arr[idx]--;
        }
        for(int i = 0; i<26; i++){
            if(arr[i] != 0)
                return false;
        }
        return true;
    }
};