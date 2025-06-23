// Last updated: 24/6/2025, 12:42:58 am
class Solution {

    long long const MOD = 1000000007;
    long long POW(long long x,long long n){
        if(n==0)    return 1;

        long long k=(POW(x,n/2))%MOD;
        if(n%2==0){
            return (k*k)%MOD;
        }

        return (((k*k)%MOD)*x)%MOD;
    }

public:
    int countGoodNumbers(long long n) {
        long long odd=n/2;
        long long ev=n-odd;

        if(odd==0)  return POW(5,n);

        return (POW(4,odd)*POW(5,ev))%MOD;
        
    }
};