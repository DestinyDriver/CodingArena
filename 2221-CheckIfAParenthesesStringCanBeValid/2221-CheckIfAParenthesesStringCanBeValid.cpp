// Last updated: 24/6/2025, 12:42:47 am
class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n=s.size();

        if(n%2==1)  return false;

        int op=0;
        int cl=0;
        int wild=0;

        for(int i=0;i<n;i++){
            if(locked[i]=='0')    {wild++;continue;}
            if(s[i]==')')   cl++;
            else    op++;

            if(cl>op){
                cl--;wild--;
                if(wild<0)  return false;
            }
        }

        op=0;cl=0;wild=0;

        for(int i=n-1;i>=0;i--){
            if(locked[i]=='0')    {wild++;continue;}
            if(s[i]==')')   cl++;
            else    op++;

            if(cl<op){
                op--;wild--;
                if(wild<0)  return false;
            }
        }

        return true;


        
    }
};