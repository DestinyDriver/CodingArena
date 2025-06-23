// Last updated: 24/6/2025, 12:45:56 am
/*

Problem
-------
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Solution
--------
+ Scan the strings from left to right
+ Whenever there's a mismatch, break out of the loop.

*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      int n = strs.size();
      int i, j;
      
      // sanitize the input
      if (n == 0)
        return "";
      if (n == 1)
        return strs[0];

      // scan strs[0] from left to write and compare with other strings
      for(i = 0; i < strs[0].size(); ++i)
      {
        char val = strs[0][i];
        for (j = 1; j < n; ++j)
        {
          if (i >= strs[j].size() || val != strs[j][i])
            return strs[0].substr(0, i);
        }
      }
      return strs[0];
    }
};