// Last updated: 24/6/2025, 12:46:03 am
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0) return 0;
        // if()
        vector<bool>visited(257,false);
        int i=0;
        int r=0;
        int ans=0;

        while(i<s.size()){
            // if(!visited[s[i]-'a']) i++;
            // if(s[i]<'a'||s[i]>'z'   )return 0;
            if(visited[s[i]]){
                while(s[r]!=s[i]){
                    visited[s[r]]=false;
                    r++;
                }
                r++;
            }
            visited[s[i]]=true;ans=max(ans,i-r+1);i++;

        }return ans;
        
    }
};