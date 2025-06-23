// Last updated: 24/6/2025, 12:42:30 am
class Solution {
public:
    int commonFactors(int a, int b) {
        int max = a;
        if(b<a) max = a;
        int count = 0;
        for(int i =1; i <= max ; i++){
            if(a % i == 0 && b % i == 0){
                count++;
            }
        }
        return count;
    }
};