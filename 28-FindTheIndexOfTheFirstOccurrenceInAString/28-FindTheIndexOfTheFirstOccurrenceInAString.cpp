// Last updated: 24/6/2025, 12:45:44 am
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.find(needle) == -1)
        return -1;
        return haystack.find(needle);
        // int j=0;
        // for(int i=0;i<haystack.length();i++)
        // {
        //     if(haystack[i] == needle[j])
        //     {
        //         j++;
        //         if(j == needle.length()){
        //             return i-j+1;
        //         }
        //     }
        //     else{
        //         i = i - j;
        //         j=0;
        //     }
        // }
        // return -1;
    }
};


// class Solution {
// public:
//     int strStr(string haystack, string needle) {
        
//         for(int i=0;i<haystack.size();i++){
            

//             for(int j=0;j<needle.size();j++){
//                 if(haystack[i+j]!=needle[j]){break;}

//                 if(haystack[i+j]==needle[j]&&j==needle.size()-1) return i;
//             }
//         }

//         return -1;
        
//     }
// };