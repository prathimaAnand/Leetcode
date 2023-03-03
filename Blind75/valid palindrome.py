https://leetcode.com/problems/valid-palindrome/submissions/908115575/

class Solution:
    def isPalindrome(self, s: str) -> bool:
        NewString = ''

        for i in s:
            if i.isalnum():
                NewString += i.lower()
        return NewString == NewString[::-1]
                 
