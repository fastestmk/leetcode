def maxProfit(prices):
	n = len(prices)
	if n == 1:
		return 0
	minPrice = prices[0]; maxDiff = 0
	for price in prices:
		minPrice = min(minPrice, price) # minPrice of Stock
		maxDiff = max(maxDiff, price - minPrice) # maxDiff of profits of stocks
	return maxDiff	