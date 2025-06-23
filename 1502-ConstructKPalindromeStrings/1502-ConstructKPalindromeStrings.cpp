// Last updated: 24/6/2025, 12:43:25 am
class Solution {
public:
    bool canConstruct(string s, int k) {
        if(k>s.size())  return false;
        int odd=0;
       
        vector<int>mp(26,0);

        for(int i=0;i<s.size();i++){
            mp[s[i]-'a']++;
            
        }

        for(int i=0;i<26;i++){
            if(mp[i]%2==1)   odd++;
            
        }
        

        if(odd>k)   return false;

        return true;
        
    }
};