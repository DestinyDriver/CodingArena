// Last updated: 24/6/2025, 12:41:52 am
class Solution {
public:
    int numOfUnplacedFruits(vector<int>& f, vector<int>& b) {int ans=0;
        
        for(int i=0;i<f.size();i++){
            bool mk=false;
            for(int j=0;j<b.size();j++){
                if(b[j]==-1)    continue;
                if(b[j]>=f[i])  {b[j]=-1;mk=true;break;}
            }
            if(!mk)  ans++;
        }
        return ans;
    }
};