// Last updated: 24/6/2025, 12:43:57 am
class Solution {
public:
    void rec(vector<int>&nums,int target,int s,int e,int m,int &key){
        if(s>e)return;

        if(nums[m]==target) {key=m;return;}

        if(nums[m]<target){
            rec(nums,target,m+1,e,(m+1+e)/2,key);
        }else{
            rec(nums,target,s,m-1,(m-1+s)/2,key);
        }

    }
    int search(vector<int>& nums, int target) {
        int key=-1;
        rec(nums,target,0,nums.size()-1,(0+nums.size()-1)/2,key);
        return key;
        
    }
};