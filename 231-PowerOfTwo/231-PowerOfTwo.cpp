// Last updated: 24/6/2025, 12:44:38 am
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0)    return false;
        // n=abs(n);
        long long k=n;
        return (k)&(k-1)?false:true;
        
    }
};