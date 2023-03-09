#link: https://leetcode.com/problems/pascals-triangle/submissions/911766913/

'''
time & memory = O(n)
'''

class Solution:
    def generate(self, numRows: int) -> List[List[int]]:

        result2Darr = [[1]]

        for i in range(numRows - 1):

            tempRow = [0] + result2Darr[-1] +[0]
            row =[]

            for j in range(len(result2Darr[-1]) + 1):
                row.append(tempRow[j] + tempRow[j+1])
            result2Darr.append(row)

        return result2Darr
