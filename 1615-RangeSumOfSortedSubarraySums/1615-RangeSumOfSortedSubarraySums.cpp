// Last updated: 24/6/2025, 12:43:13 am
class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>ans;
        static const int mod = 1e9+7;
        
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                ans.push_back(sum);

            }
        }

        sort(ans.begin(),ans.end());
        int sum=0;

        for(int i=left;i<=right;i++){
            sum=(sum+ans[i-1])%mod;
            
        }
        return sum;
        
    }
};