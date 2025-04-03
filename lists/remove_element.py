class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        k = 0 # initialize a pointer
        for i in range(len(nums)): # can't use "for i in nums" because we need to iterate by index instead of value
            if nums[i] != val:
                nums[k] = nums[i]
                k+=1
        #         nums.append(i)
        #     output = nums[i]
        # output_size = len(output)
        return k