// Last updated: 24/6/2025, 12:42:40 am
class Solution {
public:
    int minBitFlips(int s, int g) {

        return __builtin_popcount(s^g);
        
    }
};