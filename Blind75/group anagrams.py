#link:https://leetcode.com/problems/group-anagrams/submissions/911238146/

"""
Concept: Using Hashmap
1. count letters make that as key
2. assign key with list of anagrams
=> hashmap will have group of anagrams with respective single key a/c to count of letters
"""

# Memory = O(m.n)

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        FinalResult = defaultdict(list)

        for i in strs:
            count = [0] * 26

            for j in i:
                count[ord(j) - ord("a")] += 1

            FinalResult[tuple(count)].append(i)
           
        return FinalResult.values()
