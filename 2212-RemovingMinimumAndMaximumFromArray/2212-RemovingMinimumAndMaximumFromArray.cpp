// Last updated: 24/6/2025, 12:42:48 am
class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini=INT_MAX;int mi=0;
        int maxi=INT_MIN;int ma=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi){
                maxi=nums[i];ma=i;
            }

            if(nums[i]<mini){
                mini=nums[i];mi=i;
            }
        }

        if(mi==ma)  return nums.size();
        if(ma<mi)   swap(ma,mi);
        int n=nums.size();

        return min((n-(ma-mi-1)),min(n-mi,ma+1));      
        // return ma;
        
    }
};