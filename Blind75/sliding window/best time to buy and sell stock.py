''' Concept : two pointers L & R
L = Buy
R = Sell

Buy low and Sell high ( as high as possible)

if L < R just incrememt R
if L > R - increment both

Max profit storage = min - max

memory = O(1) scan through array and 2 pointers
time = O(1)

'''

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        leftPointer, rightPointer = 0, 1
        maxProfit = 0

        while rightPointer < len(prices):
            if prices[leftPointer] < prices[rightPointer]:
                currentProfit = prices[rightPointer] - prices[leftPointer]
                maxProfit = max(currentProfit, maxProfit)
            else:
                leftPointer = rightPointer

            rightPointer +=1

        return maxProfit

