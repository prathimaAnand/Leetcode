https://leetcode.com/problems/valid-palindrome/submissions/908115575/

#Solution 1 : using built-in functions
    
class Solution:
    def isPalindrome(self, s: str) -> bool:
        NewString = ''  # extra memory

        for i in s:
            if i.isalnum():
                NewString += i.lower()
        return NewString == NewString[::-1] # extra memory
    
#Solution 2 : without using built-in functions 
# constant memory O(1) 
# using 2 pointers
                 
