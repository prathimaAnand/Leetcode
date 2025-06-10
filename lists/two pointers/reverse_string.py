class Solution:
    def reverseString(self, s: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        # Swap works for odd numbers string

        # iterate
        # this needs debugging and if you give n = len(s)/2 then iterate until n it doesn't work
        # n = len(s)
        # for i in range(n//2):
        #     print('---',i)
        #     temp = s[i]
        #     print('temp',temp)
        #     s[i] = s[n - i-1]
        #     print('s[i]', s[i])
        #     s[n - i-1] = temp
        #     print()
        #     print('s[n-i-1]',s[n-i-1])
            # print('s[n-i]',s[n-i])
        
        # two pointers is prefered
        n = len(s) # 4
        start = 0 
        end = n-1 # 3
        while(start < end): # 0,1  < 2,3 # odd 0,1  2  3,4
            temp = s[start]
            s[start] = s[end]
            s[end] = temp
            start += 1
            end -= 1


        # for i in range(n):
        #     temp = start
        #     start = end
        #     end = temp
        #     start = s[i + 1]
        #     end = s[n-2-i]
        #     if start >= end:
        #         break
            
        

            
            
            