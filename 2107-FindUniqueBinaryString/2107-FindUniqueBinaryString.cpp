// Last updated: 5/7/2025, 11:26:51 am
class Solution {
    bool tra(int ind,string &s,vector<string>&nums){
        bool mk=false;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==s)  mk=true;
        }

        if(mk==false)   return true;
        if(ind==nums.size())    return false;

        if(tra(ind+1,s,nums))   return true;;
        s[ind]='1';
        if(tra(ind+1,s,nums))   return true;;
        s[ind]='0';

        return false;

    }
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string s="";
        for(int i=0;i<nums.size();i++){
            s+="0";
        }
        bool b=tra(0,s,nums);
        return s;

        
    }
};