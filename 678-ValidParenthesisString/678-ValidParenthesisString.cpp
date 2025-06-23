// Last updated: 24/6/2025, 12:44:03 am
class Solution {
public:
    bool checkValidString(string s) {
        int mi=0;int ma=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){mi++;ma++;}
            else if(s[i]==')'){mi=max(mi-1,0);ma--;}
            else{
                mi=max(mi-1,0);
                ma++;
            }
            if(ma<0)    return false;
        }
        // if(ma<0)  return false;
        if(mi!=0)   return false;
        return true;
        
    }
};