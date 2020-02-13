int maxProfit(vector<int> & prices){
	int n = prices.size();
	if (n == 1)
		return 0;
	int minPrice = prices[0], maxDiff = 0;
	for(auto price : prices){
		minPrice = min(minPrice, price); // minPrice of stock
		maxDiff = max(maxDiff , price - minPrice); // maxDiff of profits of stocks
	}	
	return maxDiff;
}