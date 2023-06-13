# using Hashmap with O(n) memory - extra memory space
class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        res, count = 0, 0
        for n in nums:
            count[n] = 1 + count.get(n, 0)
            if count[n] > maxCount:
                res = n
        maxCount = max(count[n], maxCount)
        return res 


# Boyer Moore algo

class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        res, count = 0, 0
        for n in nums:
            if count == 0:
                res = n
            if res == n:
                count += 1 
            else:
                -1
        return res
    
    
    

        
