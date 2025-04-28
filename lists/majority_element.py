
class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        result, count = 0, 0
        for i in nums:
            if count == 0:
                result = i
            count += (1 if i == result else -1)
        return result


nums = [1,1,2,2,2,1,1]
res, count = 0, 0
for i in range(len(nums)):
    if count == 0:
        res = nums[i]
        print("i =", i)
        print("nums[i] =", nums[i])
    count += (1 if nums[i] == res else -1)
print("res = ", res)