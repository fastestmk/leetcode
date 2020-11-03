def threeSum(nums):
	res = []
	n = len(nums)
	for i in range(n-2):
		if i > 0 and nums[i] == nums[i-1]:
			continue
		low = i+1
		high = n-1

		while(low < high):
			sum = nums[i] + nums[low] + nums[high]
			if sum < 0:
				low += 1
			elif sum > 0:
				high -= 1
			else:
				res.append([nums[i], nums[low], nums[high]])
				while low+1 < high and nums[low] == nums[low+1]:
					low += 1
				while low < high-1 and nums[high] == nums[high-1]:
					high -= 1
				low += 1; high -= 1
	return res			
