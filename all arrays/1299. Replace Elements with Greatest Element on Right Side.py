
class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        # initilize -1
        # reverse iteration
        # check for max
        # compute max
        # replace  next array with new max

        rightMax = -1
        # int i
        for i in range(len(arr)-1, -1, -1):
            newMax = max(rightMax, arr[i])
            arr[i] = rightMax
            rightMax =newMax
        return arr
