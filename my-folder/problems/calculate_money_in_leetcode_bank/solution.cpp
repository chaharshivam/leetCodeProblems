class Solution {
public:
    int totalMoney(int n) {
        int total = 0;
        int amt = 0;
        int fullWeeks = n/7;
        if(fullWeeks < 1){
            for(int i = 0; i<n; i++){
                total+=1;
                amt += total;
            }
            return amt;
        }
        int everyMonday = 1;
        for(int i = 0; i<fullWeeks; i++){
            total = everyMonday;
            for(int j = 0; j<7; j++){
                amt+=total;
                  total += 1;
            }
            everyMonday+=1;
        }
        int remainingDays = n - (fullWeeks*7);
        total = everyMonday;
        for(int i = 0; i<remainingDays; i++){
            amt+=total;
             total+=1;
        }
        return amt;
    }
};