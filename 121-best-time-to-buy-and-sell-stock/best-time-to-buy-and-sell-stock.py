class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        max_profit = 0
        bestBuy = prices[0]

        for i in range(len(prices)):
            if prices[i]>bestBuy:
                max_profit = max(max_profit ,  prices[i] - bestBuy )
            bestBuy = min(prices[i],bestBuy)  
        return max_profit           