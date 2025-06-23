// Last updated: 24/6/2025, 12:45:05 am
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int buy=prices[0];


        for(int i=1;i<prices.size();i++){
            ans=max(prices[i]-buy,ans);
            if(buy>prices[i])   buy=prices[i];
        }
        return ans;
    }
};