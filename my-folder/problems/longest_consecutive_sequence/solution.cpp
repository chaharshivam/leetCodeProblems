class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen;
        for(auto i : nums){
            seen.insert(i);
        }
        int maxLength = 0;
        for(auto i : nums){
            if(seen.count(i-1)>0)
                continue;
            else{
                int currNum = i;
                int currMax = 1;
                while(seen.count(currNum+1) > 0){
                    currNum += 1;
                    currMax += 1;
                }
                
                maxLength = max(maxLength, currMax);
            }
        }
        return maxLength;
    }
};