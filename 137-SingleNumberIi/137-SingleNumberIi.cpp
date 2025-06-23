// Last updated: 24/6/2025, 12:44:59 am
class Solution {
public:
    int singleNumber(vector<int>& num) {
        int o=0,t=0;

        for(int i=0;i<num.size();i++){
            o=((o^num[i])&(~t));
            t=((t^num[i])&(~o));
        }

        return o;
        
    }
};