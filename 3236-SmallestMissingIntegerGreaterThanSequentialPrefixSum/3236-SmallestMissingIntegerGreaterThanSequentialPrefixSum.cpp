// Last updated: 24/6/2025, 12:41:59 am
class Solution {
public:
    int missingInteger(vector<int>& nums) {

        int start=nums[0];
        int k=0;
        int sum=0;
        int count=0;

        if(nums.size()==1){
            return start+1;
        }

        for(int i=0;i<nums.size();i++){
            if(nums[i]==start+k){
            sum=sum+nums[i];
            k++;
            }
            else {k=i;break;}   
        }
                if(k==1)
         sum+=1;



        for(int j=k;j<nums.size();j++){
            if(nums[j]==sum){
                
                sum=nums[j]+1;
                count++;
                j=k-1;
                continue;    
            }
            else if(j==nums.size()-1&&nums[j]!=sum){
                
                return sum;
            }
        }

            return sum;

        
    }
};
