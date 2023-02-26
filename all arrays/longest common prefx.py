https://leetcode.com/problems/longest-common-prefix/submissions/905169121/

  
 logic: compare 1st string with all others strings
  edge case: if 2nd string goes out of bounds then we should return the result

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:

        result = ""

        for i in range(len(strs[0])):
            for s in strs:
                if i == len(s) or s[i] != strs[0][i]:
                    return result
            result += strs[0][i]
        return result
