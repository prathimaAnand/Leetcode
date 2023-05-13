""" 
Analyze using Brut force technique
Convert into a tree
We can see that subtrees are repeating and we can reduce it to DFS
have an array to store the entries -> recursive DFS -> start from last
adding technique is similar to Fibnocci series
to reduce memory have 2 pointers instead of arrays
"""

class Solution:
    def climbStairs(self, n: int) -> int:
        one, two = 1, 1
        for i in range(n-1):
            temp = one
            one = one + two
            two = temp
        return one
