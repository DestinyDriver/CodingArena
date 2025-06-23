// Last updated: 24/6/2025, 12:42:24 am
class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        int a1=0;
        int a2=0;
        int b1=0;int b2=0;
        for(int i=0;i<5;i++){
            if(i==2)    continue;

            a1=a1*10+event1[0][i]-'0';
            a2=a2*10+event1[1][i]-'0';

            b1=b1*10+event2[0][i]-'0';
            b2=b2*10+event2[1][i]-'0'; 
        }

        return b1<=a2&&b2>=a1;
        
    }
};