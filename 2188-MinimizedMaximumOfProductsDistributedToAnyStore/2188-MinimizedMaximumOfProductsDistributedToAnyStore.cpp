// Last updated: 24/6/2025, 12:42:50 am
class Solution {
public:
    int minimizedMaximum(int k, vector<int>& arr) {

        int maxi=*max_element(arr.begin(),arr.end());
        
        int s=1;int e=maxi;
        int mid=(s+e)/2;
        int ans=0;
        
        while(s<=e){
            int sum=0;
            for(int i=0;i<arr.size();i++){
                sum+=((arr[i]+mid-1)/mid);
            }
            
            if(sum<=k){
                e=mid-1;
                ans=mid;
            }else{
                s=mid+1;
            }
            
            mid=(s+e)/2;
        }
        return ans;
        
    }
};