// Last updated: 24/6/2025, 12:46:02 am
class Solution {
public:
    int reverse(int x) {
       long long int ans=0;
        while(x!=0){
            int ex=x%10;
            x=x/10;
            ans=ans*10+ex;
        }
        if(ans<-pow(2,31)||ans>pow(2,31)-1)
        return 0;

        return ans;

        
    }
};
// class Solution {
// public:
//     int reverse(int x) {
//         int sum = 0;

//         while(x!=0)
//         {
//             int curr_digit = x%10;
//             if(sum > INT_MAX/10 || sum==INT_MAX/10 && curr_digit>7) return 0;
//             if(sum < INT_MIN/10 || sum==INT_MIN/10 && curr_digit<-8) return 0;
//             sum = sum*10+curr_digit;
//             x/=10;
//         }

//         return sum;
//     }
// };