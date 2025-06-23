// Last updated: 24/6/2025, 12:42:19 am
class Solution {
public:
    int numberOfCuts(int n) {
        if(n==1)    return 0;
        return (n)%2==0?(n)/2:n;
        
    }
};