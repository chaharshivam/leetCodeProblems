class Solution {
public:
    int countPoints(string rings) {
        array<set<char>,10> rods;
        char ch;
        for(auto it = rings.begin(); it!=rings.end(); it++){
            if(!isdigit(*it)){
                ch = *it;
            }
            else{
                int rodNum = *it - '0';
                rods.at(rodNum).insert(ch);
            }
        }
        int count = 0;
        for(auto it = rods.begin(); it != rods.end(); it++){
            if((*it).size() == 3){
                count++;
            }
        }
        return count;
    }
};