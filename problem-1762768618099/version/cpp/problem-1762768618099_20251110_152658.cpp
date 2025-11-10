// Last updated: 10/11/2025, 3:26:58 pm
class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        long long ans=0;
        long long MOD=1000000007;

        stack<pair<int,int>>st;
        int temp=0;

        for(int i=arr.size()-1;i>=0;i--){
            int ct=1;
            while(!st.empty()&&arr[i]<=st.top().first){
                auto [l,k]=st.top();
                st.pop();
                ct+=k;
                temp=(temp-((k*l)%MOD))%MOD;
            }

            temp=(temp+((ct*arr[i])%MOD))%MOD;
            st.push({arr[i],ct});
            ans=(ans+temp)%MOD;
        }

        return ans;
        
    }
};