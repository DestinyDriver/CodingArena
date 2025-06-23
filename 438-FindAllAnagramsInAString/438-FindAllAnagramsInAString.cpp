// Last updated: 24/6/2025, 12:44:22 am
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<int,int>mp,temp;
        vector<int>ans;

        for(int i=0;i<p.size();i++){
            mp[p[i]]++;
        }

        for(int i=0;i<p.size();i++){
            temp[s[i]]++;
        }

        if(temp==mp)    ans.emplace_back(0);

        int l=0;
        int r=p.size()-1;
        

        while(r+1<s.size()){
            if(temp[s[l]]==1){
                temp.erase(s[l]);
            }else{
                temp[s[l]]--;
            }

            l++;
            r++;
            temp[s[r]]++;

            if(temp==mp)    ans.emplace_back(l);

        }

        return ans;

        
    }
};