class Solution:
    def maxAscendingSum(self, nums: List[int]) -> int:
        curr = nums[0]
        max_res = curr

        for i in range(1, len(nums)):
            if nums[i-1] < nums[i]:
                curr += nums[i]
            else:
                curr = nums[i]
            max_res = max(curr, max_res)
        return max_res

        
        