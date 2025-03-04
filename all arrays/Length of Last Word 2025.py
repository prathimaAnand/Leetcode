class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        count = 0
        for i in reversed(s):
            if i == " ":
                if count > 0:
                    break
            else:
                count += 1
        return count