# concept: 
'''
Can be solved using sorting but time complexity will be O(nlogn) 
Using sequence method it can be reduced to O(n)
'''

class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        
        longSet = set(nums)# longSet = {} # define set
        longestLength = 0
        initLength = 0

        for n in nums: # iterate through list
            
            if (n - 1) not in longSet: #check if there is a n-1 number to check if start of sequene
                initLength = 1

                while (n+initLength) in longSet: # check consecutive numbers for sequence
                    initLength += 1
                longestLength = max(longestLength, initLength)

        return longestLength

