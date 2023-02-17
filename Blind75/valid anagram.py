#solution 1
#time & memory complexity = O(s+t)

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
solution 2 
"Counter" data structure in python that automatically counts 
return Counter(s) == Counter(T)
'==' does the work of end for loop in above code
#time & memory complexity = O(s+t)

"""

"""
solution 3 - for memory O(1)
useing sorting
bubble sort uses O(nlogn) but time is O(n^2) 
good ones - O(nlogn) 
memory - O(n) sometimes O(1)
"""


        
