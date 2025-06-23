// Last updated: 24/6/2025, 12:45:02 am
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        

        unordered_map<int,bool>mp;


        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=true;
        }

        int res=0;

        for(auto it:mp){
            int start=it.first;
            int ct=1;
            if(mp.find(start-1)!=mp.end())  continue;

            while(mp.find(start+1)!=mp.end()){
                ct++;
                start++;
            }

            res=max(res,ct);


        }

        return res;
    }
};