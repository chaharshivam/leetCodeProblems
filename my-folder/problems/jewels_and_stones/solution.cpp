class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for(auto it = stones.begin(); it != stones.end(); it++){
            if(jewels.find(*it) != string::npos)
                count++;
        }
        return count;
    }
};