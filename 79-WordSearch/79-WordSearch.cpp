// Last updated: 24/6/2025, 12:45:16 am
class Solution {

    bool tra(int i,int j,vector<vector<char>>& nums,int ind,string &s,vector<vector<int>>&visited){

        if(ind==s.size()){
            return true;
        }

        if(visited[i][j]==true){
            return false;
        }

        if(nums[i][j]!=s[ind]){
            return false;
        }else if(ind==s.size()-1)   return true;

        visited[i][j]=true;

        if(i+1<nums.size()&&tra(i+1,j,nums,ind+1,s,visited)) return true;
        if(i-1>=0&&tra(i-1,j,nums,ind+1,s,visited)) return true;
        if(j+1<nums[0].size()&&tra(i,j+1,nums,ind+1,s,visited)) return true;
        if(j-1>=0&&tra(i,j-1,nums,ind+1,s,visited)) return true;

        visited[i][j]=false;
        return false;
    }



public:
    bool exist(vector<vector<char>>& nums, string s) {
        vector<vector<int>>visited(nums.size(),vector<int>(nums[0].size()));
        
        
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[0].size();j++){
                if(nums[i][j]==s[0]){
                    if(tra(i,j,nums,0,s,visited))   return true;
                }
            }
        }

        return false;
        
    }
};