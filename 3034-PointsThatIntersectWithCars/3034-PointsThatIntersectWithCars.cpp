// Last updated: 24/6/2025, 12:42:03 am
class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        vector<vector<int>>v;
        sort(nums.begin(),nums.end());

        v.push_back(nums[0]);
        int j=0;
        int ans=0;

        for(int i=1;i<nums.size();i++){
            if(v[j][1]>=nums[i][0]){
                v[j][1]=max(nums[i][1],v[j][1]);
            }else{
                ans+=v[j][1]-v[j][0]+1;
                v.push_back(nums[i]);
                j++;
            }

        }
         ans+=v[j][1]-v[j][0]+1;;
         return ans;

        
        
    }
};