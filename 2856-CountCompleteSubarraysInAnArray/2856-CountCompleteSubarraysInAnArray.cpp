// Last updated: 24/6/2025, 12:42:06 am
class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        vector<int>v(2001,0);
        int ct=0;
        for(int i=0;i<nums.size();i++){
            if(v[nums[i]]==0){
                ct++;
                v[nums[i]]=1;
            }
        }

        v=vector<int>(2001,0);
        int sz=0;
        int ans=0;
        int l=0;

        for(int i=0;i<nums.size();i++){
            if(v[nums[i]]==0)   sz++;
            v[nums[i]]++;

            while(sz==ct){
                ans+=nums.size()-i;
                v[nums[l]]--;
                if(v[nums[l]]==0)   sz--;
                
                l++;

            }



            
        }

        return ans;
        
    }
};