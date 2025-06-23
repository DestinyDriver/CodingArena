// Last updated: 24/6/2025, 12:43:24 am
class Solution {
public:
    int maxDiff(int num) {
        vector<int>v;
        while(num!=0){
            v.push_back(num%10);
            num/=10;
        }

        int ans=0;

        if(v[v.size()-1]==9||v[v.size()-1]==1){
            int j=v.size()-1;
            int lel=v[v.size()-1];
            while(j>=0){
                if(v[j]==0&&lel==1){ans=ans*10;j--;continue;}
                if(v[j]!=lel)   break;
                ans=ans*10+8;
                j--;
            }
            if(j!=-1){
                int el=v[j];
                for(int i=j;i>=0;i--){
                    // if(v[i]==0){ans=ans*10;continue;}
                    if(v[i]==lel) ans=ans*10+8;
                    else if(v[i]==el){
                        if(lel==1)  ans=ans*10+el;
                        else    ans=ans*10+9-el;
                    }   
                    else    ans=ans*10;

                }
            }
        }else{
            int el=v[v.size()-1];
            for(int i=v.size()-1;i>=0;i--){
                
                if(v[i]==el)    ans=ans*10+8;
                else ans=ans*10;
            }
        }

        return ans;
        
    }
};