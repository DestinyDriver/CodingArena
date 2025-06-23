// Last updated: 24/6/2025, 12:43:36 am
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;

        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }

        set<int>s;

        for(auto i:mp){
            if(s.find(i.second)!=s.end())   return false;
            s.insert(i.second);
        }
        return true;
        
        
    }
};