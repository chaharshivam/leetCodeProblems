class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits[digits.size()-1] != 9){
            digits[digits.size()-1] += 1;
            return digits;
        }
        auto et = digits.end()-1;
        int count = 0;
        while(*et == 9 && et != digits.begin()){
            *et = 0;
            count++;
            et--;
        }
        if(et == digits.begin() && *et != 9){
            *et += 1;
            return digits;
        }
        if(et == digits.begin() && *et == 9){
            vector<int> res;
            res.push_back(1);
            for(int i = 0; i<count; i++){
                res.push_back(0);
            }
            res.push_back(0);
            return res;
        }
        else{
            *et += 1;
            return digits;
        }
        
    }
};