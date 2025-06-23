// Last updated: 24/6/2025, 12:42:41 am
class Solution {
public:
    int countEven(int num) {
        int count=0;
        for(int i=1;i<=num;i++){
            int b=i;
            int ans=0;
            while(b!=0){
                int rem=b%10;
                b=b/10;
                ans+=rem;

            }
            if(ans%2==0)
            count++;
        }
        return count;

        
        
    }
};