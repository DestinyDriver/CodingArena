// Last updated: 5/7/2025, 11:26:35 am
class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        map<int,int>mp;

        for(auto v:shifts){
            if(v[2]==0){
                mp[v[0]]-=1;
                mp[v[1]+1]+=1;

            }else{
                mp[v[0]]+=1;
                mp[v[1]+1]-=1;

            }
        }

        int ct=0;
        for(auto &i:mp){
            ct+=i.second;
            i.second=ct;
        }

        for(int i=0;i<s.size();i++){
            auto it=mp.upper_bound(i);
            if(it == mp.begin()) continue;
            it--;

            s[i] = ((s[i] - 'a' + it->second) % 26 + 26) % 26 + 'a';



        }

        return s;

        




         

        

    }
};