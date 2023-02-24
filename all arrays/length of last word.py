Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.

My Logic: loop from reverse of string - count the length until space is found
  correction: use while loop instead of for
    consider cases with spaces at the end
    
  
class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        # temp = ""
        i , length = len(s) - 1, 0
        while s[i] == " ":
            i -= 1
        while i >= 0 and s[i] != " ": # string with no space at the end
        # i >= 0 to make sure that it is end of the loop and it should exit from loop
            length += 1
            i -= 1
        # for i in reversed(range(len(s))) :
        #     if s[i] != " " :
        #         length +=1
        #         i-= 1
            # problem is "for" iterates through whole string
             # here its just skipping the space
                
                # if s[i] == " ":
                # temp = s[i]
            # else:
        return length
        
