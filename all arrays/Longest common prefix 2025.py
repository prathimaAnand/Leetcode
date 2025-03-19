class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        res = strs[0]
        for i in range(len(strs)):
            str_in_list = strs[i]
            min_res = min(len(res), len(strs[i]))
            for j in range(min_res):
                if res[j] != str_in_list[j]:
                    res = res[:j]
                    break
        return res 