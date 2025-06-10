class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        left = 1
        right = 1
        # k = 1
        end = len(nums) 
        while(right != end):
            if nums[right] == nums[right - 1]:
                right += 1
            else:
                nums[left] = nums[right]
                left += 1
                right += 1
                # print("nums[i+1] = ", nums[i+1])
        return left