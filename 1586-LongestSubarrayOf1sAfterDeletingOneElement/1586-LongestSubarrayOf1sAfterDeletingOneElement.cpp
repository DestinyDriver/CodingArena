// Last updated: 24/6/2025, 12:43:16 am
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int k=1;
        int ans=0;
        int l=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)  k--;
            if(k==-1){
                while(nums[l]!=0){
                    l++;
                }l++;k++;
            }
            ans=max(i-l+1,ans);
        }
        return ans-1;
        
    }
};