// Last updated: 24/6/2025, 12:42:22 am
class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int ct=0;

        

       for (int i = 0; i < nums.size(); i++) {
    int g = 0;
    for (int j = i; j < nums.size(); j++) {
        g = gcd(g, nums[j]);
        if (g == k) ct++;
        else if (g < k) break;
    }
}

        return ct;
        
    }
};