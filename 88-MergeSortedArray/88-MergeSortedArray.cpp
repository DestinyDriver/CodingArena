// Last updated: 24/6/2025, 12:45:15 am
class Solution {
public:
    void merge(vector<int>& nums1, int n1, vector<int>& nums2, int n2) {

        int i=0,j=0,k=0;
        vector<int>v(n1+n2);

        while(i<n1&&j<n2){
            if(nums1[i]<nums2[j]){
                v[k]=nums1[i];
                i++;

            }else{
                v[k]=nums2[j];
                j++;
            }
            k++;
        }

        while(i<n1){
            v[k]=nums1[i];
            i++;
            k++;
        }    
        while(j<n2){
            v[k]=nums2[j];
            j++;
            k++;
            }

        nums1=v;
    }

};