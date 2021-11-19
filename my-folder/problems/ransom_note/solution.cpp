class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       for(auto it = ransomNote.begin(); it!=ransomNote.end(); it++){
           auto fi = find(magazine.begin(), magazine.end(), *it);
           if(fi == magazine.end())
               return false;
           if(*fi == '.')
               continue;
           *fi = '.';
       }
        return true;
    }
};