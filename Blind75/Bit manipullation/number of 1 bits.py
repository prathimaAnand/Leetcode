'''Time - O(no. of bits) = constant O(1)
Bruce force works here but Complicated logic can be figured and applied to reduce time complexity
n = n& n(n-1)
we can run the loop as many times as there are ones in the number
'''
#brut force
class Solution:
    def hammingWeight(self, n: int) -> int:
        result = 0
        while n: 
            result += n % 2
             n = n >> 1

        return result
#logic
class Solution:
    def hammingWeight(self, n: int) -> int:
        result = 0
        while n:
            n &= (n-1)
            result += 1

        return result
