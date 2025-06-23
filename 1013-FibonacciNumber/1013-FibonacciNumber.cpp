// Last updated: 24/6/2025, 12:43:45 am
class Solution {
public:
    int fib(int n) {
        if(n==1||n==0)  return n;


        return fib(n-1)+fib(n-2);
        
    }
};