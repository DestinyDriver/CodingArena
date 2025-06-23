// Last updated: 24/6/2025, 12:45:59 am
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long rev=0;
        long long n=x;
        // if(n<0) n=-n;
        

        while(n>0){
            rev=rev*10+(n%10);
            if(rev>INT_MAX) return false;
            n/=10;
        }

        return rev==x;
        
    }
};