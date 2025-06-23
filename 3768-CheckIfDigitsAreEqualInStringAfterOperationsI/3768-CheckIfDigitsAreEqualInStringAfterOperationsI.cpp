// Last updated: 24/6/2025, 12:41:46 am
class Solution {
public:
    bool hasSameDigits(string s) {

        string k="";
        int i=0;
        while(s.size()!=2){
            int l=(s[i]+s[i+1]-'0'-'0')%10;
            k+=to_string(l);
            i++;
            if(i==s.size()-1)   {s=k;k="";i=0;}
        }
        return s[0]==s[1]?true:false;

        
    }
};