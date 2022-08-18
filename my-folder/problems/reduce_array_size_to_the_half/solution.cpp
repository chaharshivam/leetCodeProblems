class Solution {
public:
    static bool sortvp(pair<int,int> p1, pair<int,int> p2){
        if(p1.second < p2.second)
            return false;
        return true;
    }
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto i: arr){
            mp[i]++;
        }
        vector<int> vp;
        for(auto i : mp){
            vp.push_back(i.second);
        }
        sort(vp.begin(),vp.end(),greater<int>());
        int set = 0;
        int sum = 0;
        int halfsize = arr.size()/2;
        for(auto i:vp){
            sum += i;
            if(sum >= halfsize){
                set++;
                break;
            }
            set++;
        }
        return set;
    
    }
};