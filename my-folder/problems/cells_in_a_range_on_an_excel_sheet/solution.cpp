class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> cells;
        int startingNum = s[1] - '0', endingNum = s[4] - '0';
        char startingChar = s[0], endingChar = s[3];
        for(char ch = startingChar; ch <= endingChar; ch++){
            for(int i = startingNum; i<=endingNum; i++){
                string str = ch + to_string(i);
                cells.push_back(str);
            }
        }
        return cells;
    }
};