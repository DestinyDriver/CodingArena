// Last updated: 25/6/2025, 11:45:04 am
class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int a=0;
        if(ax1<bx2&&ax2>bx1){
           a=min(ax2,bx2)-max(ax1,bx1);
        }

        // return a;

        int b=0;

        if(ay1<by2&&ay2>by1){
            b=min(ay2,by2)-max(ay1,by1);
        }

        // return b;

        return (abs(ax1-ax2))*(abs(ay1-ay2))+(abs(bx1-bx2))*(abs(by1-by2))-abs(a*b);
        
    }
};