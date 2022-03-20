class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for(auto it = operations.begin(); it != operations.end(); it++){
            if((*it)[0] == 'X'){
                if((*it)[1] == '+')
                    x = x + 1;
                else
                    x = x - 1;
            }
            else if((*it)[0] == '+')
                x = x + 1;
            else if((*it)[0] == '-')
                x = x - 1;
        }
        return x;
    }
};