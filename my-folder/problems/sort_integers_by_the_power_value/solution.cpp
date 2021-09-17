class Solution {
public:
    int findPower(int n){
        int count = 0;
        while(n!=1){
            if(n%2 == 0){
                n = n/2;
            }else{
                n = 3*n+1;
            }
            count++;
        }
        return count;
    }
    int getKth(int lo, int hi, int k) {
        vector<pair<int,int>> v;
        for(int i = lo; i<=hi; i++){
            int power = findPower(i);
            v.push_back(make_pair(power,i));
        }
        sort(v.begin(), v.end());
        return v[k-1].second;
    }
};