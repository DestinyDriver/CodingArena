// Last updated: 24/6/2025, 12:42:00 am
class Solution {
public:
    vector<int> numberGame(vector<int>& sums) {

        int size=sums.size();       
        sort(sums.begin(),sums.end());
        for(int i=0;i+1<size;i+=2){
            swap(sums[i],sums[i+1]);
        }  
        return sums;   
    }
};