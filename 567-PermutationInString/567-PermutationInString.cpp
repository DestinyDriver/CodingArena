// Last updated: 24/6/2025, 12:44:06 am
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>mp,temp;
        if(s1.size()>s2.size()) return false;

        for(int i=0;i<s1.size();i++){
            mp[s1[i]]++;
        }

        for(int i=0;i<s1.size();i++){
            temp[s2[i]]++;
        }

        if(temp==mp)    return true;

        int l=0;
        int r=s1.size()-1;
        

        while(r+1<s2.size()){
            if(temp[s2[l]]==1){
                temp.erase(s2[l]);
            }else{
                temp[s2[l]]--;
            }

            l++;
            r++;
            temp[s2[r]]++;

            if(temp==mp)    return true;

        }

        return false;
        
    }
};