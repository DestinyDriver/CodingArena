// Last updated: 24/6/2025, 12:45:04 am
class Solution {
public:
    int maxProfit(vector<int>& arr) {
        
        int buy=arr[0];
        int profit=0;

        for(int i=1;i<arr.size();i++){
            if(arr[i]>buy){
                profit+=arr[i]-buy;
            }
            buy=arr[i];
        }
        return profit;
    }
};