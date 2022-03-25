class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
       unordered_map<string,string> map;
        for(auto it = paths.begin(); it!=paths.end(); it++){
            map[(*it)[0]] = (*it)[1];
        }
        string findKey = paths[0][0];
        while(map.count(findKey) > 0){
            findKey = map[findKey];
        }
        return findKey;
    }
};