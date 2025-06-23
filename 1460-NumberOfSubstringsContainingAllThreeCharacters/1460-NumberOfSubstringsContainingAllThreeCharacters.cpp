// Last updated: 24/6/2025, 12:43:30 am
class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int>v(3,0);

        int ans=0;int l=0;int sz=0;
        for(int i=0;i<s.size();i++){
            if(v[s[i]-'a']==0)  sz++;
            v[s[i]-'a']++;

            while(sz==3){
                ans+=s.size()-i;
                v[s[l]-'a']--;
                if(v[s[l]-'a']==0)  sz--;
                l++;
            }

        }

        return ans;
        
    }
};