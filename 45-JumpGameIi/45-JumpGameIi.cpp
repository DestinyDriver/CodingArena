// Last updated: 24/6/2025, 12:45:34 am
class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int ct=0;

        for(int i=0;i<n-1;i++){//jumping areas
            ct++;
            int maxcover=i+nums[i];
            if(maxcover>=n-1)    break;
            int j=i+1;
            int maxi=maxcover;
            int l=i;

            while(j<=maxcover){
                if(nums[j]+j>=n-1)  return ct+1;
                if(nums[j]+j>maxi){
                    maxi=nums[j]+j;
                    l=j;
                }
                j++;
            }
            // if(l==i)    return 0;
            i=l-1;

        }
        return ct;
        
    }
};