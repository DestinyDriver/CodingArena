// Last updated: 24/6/2025, 12:44:15 am
class Solution {
public:
    int hammingDistance(int x, int y) {
        return __builtin_popcount(x^y);
        
    }
};