// Last updated: 24/6/2025, 12:45:40 am
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int s=0;
        int e=nums.size()-1;

        int mid=(s+e)/2;
        int minn=nums.size();

        while(s<=e){
            if(nums[mid]==target){
                minn=min(minn,mid);
                e=mid-1;
            }else if(nums[mid]>target){
                e=mid-1;
            }else{
                s=mid+1;
            }

            mid=(s+e)/2;
        }

        if(minn==nums.size())   return {-1,-1};

         s=0;
         e=nums.size()-1;

         mid=(s+e)/2;
        int maxxi=-1;

        while(s<=e){
            if(nums[mid]==target){
                maxxi=max(maxxi,mid);
                s=mid+1;
            }else if(nums[mid]>target){
                e=mid-1;
            }else{
                s=mid+1;
            }

            mid=(s+e)/2;
        }

        return {minn,maxxi};
        
    }
};