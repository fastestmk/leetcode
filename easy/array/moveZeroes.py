def moveZeroes(nums):
	j = 0
	for i, num in enumerate(nums):
		if num != 0:
			nums[j] = nums[i]
			j += 1
		
	for x in range(j, len(nums)):
		nums[x] = 0