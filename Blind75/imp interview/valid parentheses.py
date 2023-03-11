'''
Concept:
using stack to store and pop characters
hasp map stores - closed brackets as keys with open brackets as values
when a closed bracket is encountered check haspmap for value and match them with going through stack


memory & time = O(n)
'''

class Solution:
    def isValid(self, s: str) -> bool:
        stackList = []
        bracketHM = { ")" : "(", "}" : "{",  "]" : "[" }

        for i in s:
            if i in bracketHM:
                if stackList and stackList[-1] == bracketHM[i]:
                    stackList.pop()
                else:
                    return False
            else:
                stackList.append(i) # if you open bracket is encountered
        
        return True if not stackList else False # only enter true is stack is empty

