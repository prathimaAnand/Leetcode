class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        # to check if the lengths are same, if not then its not a anagram at all
        if len(s) != len(t):
            return False

        # creating variables for hash maps
        hashS , hashT = {} , {}

        # for building hash maps
        for i in range(len(s)):
            hashS[s[i]] = 1 + hashS.get(s[i],0)
            hashT[t[i]] = 1 + hashT.get(t[i],0)
        
        
        #iterating through hash maps and make sure that counts are the same
        for j in hashS:
            if hashS[j] != hashT.get(j,0):
                return False
        
        return True

"""
code 2 
"Counter" data structure in python that automatically counts 

"""
        
