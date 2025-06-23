// Last updated: 24/6/2025, 12:45:30 am
class Solution {
public:
    double myPow(double x, int n) {
        
        if(n==0)    return 1;

        long long k=n;

        if(n<0){k=abs(k);x=1/x;}

        double y=pow(x,k/2);

        if(n%2==0){
            return y*y;
        }
        return x*y*y;
        
    }
};