// Last updated: 5/7/2025, 11:26:56 am
class Solution {
public:
    string replaceDigits(string s) {
        for(int i=1;i<s.size();i+=2){
            s[i]=(s[i-1]+s[i]-'0');
        }
        return s;
        
    }
};