def maxSubArray(nums):
	n = len(nums)
	total = 0; best = nums[0]
	if n == 1:
		return nums[0]
	for num in nums:
		total = max(num, total+num)
		best = max(best, total)
	return best	