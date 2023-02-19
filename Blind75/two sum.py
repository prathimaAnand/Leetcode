class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashStore = {}

        for i, n in enumerate(nums): # n is value and i is index
            diff = target - n
            if diff in hashStore:
                return [hashStore[diff],i]
            hashStore[n] = i # val : index - > updating the index
        
