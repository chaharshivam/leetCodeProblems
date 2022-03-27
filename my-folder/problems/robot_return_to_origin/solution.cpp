class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0;
        int y = 0;
        for(auto it = moves.begin(); it!=moves.end(); it++){
            if(*it == 'U')
                y++;
            else if(*it == 'D')
                y--;
            else if(*it == 'L')
                x--;
            else if(*it == 'R')
                x++;
        }
        return x==0 && y == 0;
    }
};