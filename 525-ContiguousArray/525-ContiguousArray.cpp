// Last updated: 5/7/2025, 11:28:16 am
class Solution {
public:
    int findMaxLength(vector<int>& nums) {

        int sum=0;
        int ans=0;
        unordered_map<int,int>mp;

        // 1 2 3
        // 1 3 9
        // 1 3 9
        
        // 1 2 3
        // 1 3 6
        //     1

        // 11 1 1 0 
        // 1 2 3 4 3
 
        for(int i=0;i<nums.size();i++){
            sum+=nums[i]==0?-1:1;

            auto it=mp.find(sum);

            if(sum==0){
                ans=i+1;
            }else if(it!=mp.end()){
                ans=max(ans,i-it->second);
            }else{
                mp[sum]=i;
            }
        }
        return ans;

        
        
    }
};