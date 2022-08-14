class Solution {
public:
    long long binpow(long long x, long long y, long long mod){
        long long res = 1;
        if(x == 0){
            return 0;
        }
        x = x % mod;
        while(y > 0){
            if(y & 1)
                res = (res * x) % mod;
            x = (x*x) % mod;
            y >>= 1;
        }
        return res;
    }
    int countGoodNumbers(long long n) {
        long long mod = pow(10,9) + 7;
        long long num5 = 0;
        long long num4 = 0;
        if(n & 1){
            num5 = (n+1)/2;
            num4 = n/2;
        }
        else{
            num5 = n/2;
            num4 = n/2;
        }
        return (binpow(5,num5,mod) * binpow(4,num4,mod)) % mod;
    }
};