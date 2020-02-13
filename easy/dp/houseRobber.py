def rob(nums):
	n = len(nums)
	dp = [0]*n
	dp[0] = nums[0]
	dp[1] = max(nums[0], nums[1])

	for i in range(2, n):
		dp[i] = max(dp[i-1], nums[i]+dp[i-2]) # choosing max among n-1 (dp[i-1]) or dp[i-2]+currentOne 
	return dp[n-1]	