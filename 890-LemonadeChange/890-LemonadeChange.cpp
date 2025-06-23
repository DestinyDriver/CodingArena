// Last updated: 24/6/2025, 12:43:52 am
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        vector<int>v={0,0,0,0};

        // sort(bills.begin(),bills.end());

        for(int i=0;i<bills.size();i++){
            int j=bills[i]/5-1;
            int k=j-1;
            while(bills[i]!=5&&k>=0){
                if(v[k]>0){
                    if(bills[i]>(k+1)*5){
                    bills[i]-=(k+1)*5;
                    v[k]--;}
                    else    k--;
                }else   k--;
                

            }
            if(bills[i]!=5) return false;
            v[j]++;
        }
        return true;
        
    }
};