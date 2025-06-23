// Last updated: 24/6/2025, 12:46:00 am
class Solution {
    void tra(string &s,int ind,long long &ans,bool mk,bool &neg){
        if(ind>=s.size())   return;
        if(s[ind]==' '&&mk){
            tra(s,ind+1,ans,mk,neg);return;
        }

        
        if(s[ind]>='0'&&s[ind]<='9'){
            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && (s[ind] - '0') > (neg ? 8 : 7))) {
    ans = neg ? INT_MIN : INT_MAX;
    return;
}

            ans=ans*10+s[ind]-'0';
            tra(s,ind+1,ans,false,neg);

        }else if(mk&&s[ind]=='-'){
            neg=true;
            tra(s,ind+1,ans,false,neg);
            
        }else if(mk&&s[ind]=='+'){
            tra(s,ind+1,ans,false,neg);
            
        }else   return;
    }
public:
    int myAtoi(string s) {
        long long ans=0;
        bool neg=false;
        tra(s,0,ans,true,neg);

        if(neg){
            ans*=-1;
            
        }
        return ans;
        
        
        
    }
};