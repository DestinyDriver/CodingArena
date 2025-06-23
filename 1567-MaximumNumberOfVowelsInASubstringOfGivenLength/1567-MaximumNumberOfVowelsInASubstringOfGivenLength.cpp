// Last updated: 24/6/2025, 12:43:18 am
class Solution {
    bool checker(char c,vector<char>&mp){
        for(int i=0;i<mp.size();i++){
            if(mp[i]==c)    return true;
        }
        return false;
    }
public:
    int maxVowels(string s, int k) {
        vector<char>mp;
        mp.push_back('a');
        mp.push_back('e');
        mp.push_back('i');
        mp.push_back('o');
        mp.push_back('u');


        int temp=0;
        for(int i=0;i<k;i++){
            if(checker(s[i],mp)) temp++;
        }
        int ans=temp;
        // return temp;

        for(int i=k;i<s.size();i++){
            if(checker(s[i],mp)) temp++;
            if(checker(s[i-k],mp)) temp--;
            ans=max(temp,ans);
        }

        return ans;
        
    }
};