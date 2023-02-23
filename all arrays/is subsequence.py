#https://leetcode.com/problems/is-subsequence/

class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        i, j = 0, 0

        while i < len(s) and j < len(t):
            if s[i]  == t[j]:
                i+= 1
                j+=
            else:
                j+= 1

        if i == len(s) :
            return True
        else :
            False
        
Memory = 14 MB beats = 76%
Runtime = 46 ms = 16.5%
            
#  Simplified version

class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        i, j = 0, 0

        while i < len(s) and j < len(t):
            if s[i]  == t[j]:
                i+= 1
            # //     j+=
            # // else
            j+= 1

        return True if i == len(s) else False

      Memory = 13.8 MB beats = 98.5%
Runtime = 44 ms = %
