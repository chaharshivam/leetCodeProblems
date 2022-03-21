class Solution {
public:
    
    int findValues(vector<vector<string>>& items, int pos, string ruleValue){
        int count = 0;
        for(auto it = items.begin(); it!=items.end(); it++){
            if((*it)[pos] == ruleValue)
                count++;
        }
        return count;
        
    }
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count = 0;
        if(ruleKey == "type"){
            count = findValues(items,0,ruleValue);
        }
        else if(ruleKey == "color"){
            count = findValues(items,1,ruleValue);
            
        }
        else{
            count = findValues(items,2,ruleValue);
        }
        return count;
    }
};