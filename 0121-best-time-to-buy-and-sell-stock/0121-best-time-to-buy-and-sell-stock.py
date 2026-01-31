class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        left = prices[0]
        right = 0
        for i in range(1,len(prices)):
            if prices[i] <= left:
                left = prices[i]
            else:
                profit = prices[i] - left
                if profit > right:
                    right = profit
        return right
                


