// Last updated: 24/6/2025, 12:41:48 am
class Solution {
public:
    string clearDigits(string s) {

        int i=0;
        string ans="";

        while(i<s.size()){
            if(isdigit(s[i])){
                if(ans.size()!=0)
                ans.pop_back();
                else return "";

            }else{
                ans+=s[i];
            }
            i++;

        }
        return ans;
    }
};