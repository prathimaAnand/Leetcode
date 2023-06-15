# iterate through every value and concatenate array to it
#or
# take an empty array and push values twice

class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        # run through array
        # when end of array is detected concatenate once the same array
        ans = [] # list for result
        for i in range(2):
            for n in nums:
                ans.append(n)
        return ans
        

