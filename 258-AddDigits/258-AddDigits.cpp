// Last updated: 24/6/2025, 12:44:36 am
class Solution {
public:
    int addDigits(int num) {
        if(num==0)  return 0;
        if(num%9==0)    return 9;
        return num%9;

        
    }
};