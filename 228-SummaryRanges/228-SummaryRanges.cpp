// Last updated: 24/6/2025, 12:44:40 am
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if(nums.size()==0)  return {};
        vector<string>ans;
        long long st=nums[0];
        long long end=st+1;

        for(int i=1;i<nums.size();i++){
            if(end!=nums[i]){
                if(st==end-1){
                    string t=to_string(st);
                    ans.push_back(t);
                }else{
                    string t=to_string(st)+"->"+to_string(end-1);
                    ans.push_back(t);
                }
                st=nums[i];end=st+1;
            }else{
                end++;
            }
        }

        if(st==end-1){
        string t=to_string(st);
        ans.push_back(t);
        }else{
            string t=to_string(st)+"->"+to_string(end-1);
        ans.push_back(t);
        }
        return ans;
        
        
    }
};