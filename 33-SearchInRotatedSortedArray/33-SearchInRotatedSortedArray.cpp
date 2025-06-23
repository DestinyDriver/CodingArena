// Last updated: 24/6/2025, 12:45:42 am
class Solution {
public:

    int bs(vector<int>&nums,int s,int e,int target){
        int mid=(s+e)/2;

        while(s<=e){
            if(nums[mid]==target)   return mid;
            else if(nums[mid]>target)   e=mid-1;
            else s=mid+1;

            mid=(s+e)/2;
        }

        return -1;

    }
    int search(vector<int>& nums, int target) {

        int s=0;
        int e=nums.size()-1;
        int mid=(s+e)/2;

        int piv=-1;

        while(s<=e){
            if(mid+1<nums.size()&&nums[mid]>nums[mid+1]){
                piv=mid;
                
                break;
            }else if(mid+1>nums.size()){
                break;
            }else if(nums[mid]>=nums[0]){
                s=mid+1;
            }else{
                e=mid-1;
            }

            mid=(s+e)/2;
        }
        

        if(piv==-1){
            return bs(nums,0,nums.size()-1,target);
        }

        int a=bs(nums,0,piv,target);

        if(a!=-1)   return a;

        return bs(nums,piv+1,nums.size()-1,target);
        

        
    }
};