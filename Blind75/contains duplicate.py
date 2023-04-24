# https://leetcode.com/problems/contains-duplicate/submissions/898972162/

# concept: using hashset to save time 

class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        Hashset =set()
        for n in nums:
            if n in Hashset:
                return True
            Hashset.add(n)
        return False
