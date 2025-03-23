class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        # for i in s:
        #     for j in t: # since we need to loop through and check if i,i are in bounds
        i, j = 0, 0
        while i < len(s) and j < len(t):
            if s[i] != t[j]:
                j+=1
            else:
                i+=1
                j+=1
        if i==len(s):
            return True
        else:
            return False
