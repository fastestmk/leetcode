def twosum(nums, target):
	n = len(nums)
	hash = {}
	for x, num in enumerate(nums):
		if target-num in hash:
			return [hash[target-num], x] # returning indexes
		hash[num] = x	