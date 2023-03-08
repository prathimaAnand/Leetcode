
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        FinalResult = defaultdict(list)

        for i in strs:
            count = [0] * 26

            for j in i:
                count[ord(j) - ord("a")] += 1

            FinalResult[tuple(count)].append(i)
           
        return FinalResult.values()
