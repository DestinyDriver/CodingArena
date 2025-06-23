// Last updated: 24/6/2025, 12:43:49 am
class Solution {
    private:

    void merge(vector<int>&v,int left,int mid,int right){
        int n1=mid-left+1;
        int n2=right-mid;

        vector<int>first(n1),second(n2);

        for(int i=0;i<n1;i++){
            first[i]=v[left+i];
        }
        for(int i=0;i<n2;i++){
            second[i]=v[mid+1+i];
        }

        int i=0,j=0,k=0;

        while(i<n1&&j<n2){
            if(first[i]<second[j]){
                v[left+k]=first[i];
                i++;
            }
            else{
                v[left+k]=second[j];
                j++;
            }
            k++;
        }

           while (i < n1) {
        v[left+k] = first[i];
        i++;
        k++;
    }

    // Copy the remaining elements of rightVec[], if any
    while (j < n2) {
        v[left+k] = second[j];
        j++;
        k++;

    }
    }

    void mergesort(vector<int>&v,int left,int right){
        if(left<right){
            int mid=left + (right - left) / 2;


            mergesort(v,left,mid);
            mergesort(v,mid+1,right);

            merge(v,left,mid,right);

        }
    }
public:
    vector<int> sortArray(vector<int>& nums) {
        
        mergesort(nums,0,nums.size()-1);
        return nums;
    }
};