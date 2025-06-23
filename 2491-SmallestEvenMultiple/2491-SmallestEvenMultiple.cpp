// Last updated: 24/6/2025, 12:42:32 am
class Solution {
public:
    int smallestEvenMultiple(int n) {

        return n%2==0?n:(n<<1);
        
    }
};