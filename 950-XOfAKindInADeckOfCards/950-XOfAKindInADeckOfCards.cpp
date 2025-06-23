// Last updated: 24/6/2025, 12:43:48 am
class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int>mp;
        int ans=0;
        for(int i=0;i<deck.size();i++)  mp[deck[i]]++;
        int alp=0;
        
        for(auto i:mp){
            alp=gcd(alp,i.second);
            if(alp==1)  return false;
        }
        return true;
        
    }
};