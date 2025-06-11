class Solution:
    def validPalindrome(self, s: str) -> bool:

        l, r = 0, len(s) - 1

        while(l < r):
            if s[l] != s[r]:
                # skip characters
                skipL = s[l + 1: r+1]
                skipR = s[l:r]
                # reverse and check
                if skipL == skipL[::-1] or skipR == skipR[::-1]:
                    return True
                else:
                    return False
            l += 1
            r -= 1
        return True   

        # DOES NOT WORK FOR ALL TEST CASES
        # start = 0
        # end = len(s) - 1
        # for i in range(end):
        #     # if not end % 2: # odd characters
        #     #     break
        #     if start == end:
        #         break
        #     if s[start] != s[end]:
        #         end -= 1
        #         if s[start] == s[end]:
        #             continue
        #         elif s[start] != s[end]:
        #             return False
        #         else:
        #             start += 1
        #             end +=1
                
        #     start += 1
        #     end -= 1
        # return True


            

            