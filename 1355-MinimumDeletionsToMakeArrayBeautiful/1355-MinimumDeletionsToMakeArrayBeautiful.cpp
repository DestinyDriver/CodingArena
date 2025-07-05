// Last updated: 5/7/2025, 11:27:20 am
class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int op=0;
        // int l=0;
        int r=0;
        

        
        for(int i=0;i<nums.size();i++){
            int inel=nums[i];
            int l=i;
            if((i-op)%2==0){
                for(int j=i+1;j<nums.size();j++){
                    if(inel!=nums[j])   break;
                    op++;
                    l=j;
                }
                i=l;
            }
            
        
        }


        if((nums.size()-op)%2!=0)   return op+1;
        return op;


        
    }
};