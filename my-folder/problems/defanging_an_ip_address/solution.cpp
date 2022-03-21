class Solution {
public:
    string defangIPaddr(string address) {
        string defanged;
        string str = "[.]";
        for(auto it = address.begin(); it!=address.end(); it++){
            if(*it == '.')
                defanged.append(str);
            else
                defanged+=*it;
        }
        return defanged;
    }
};