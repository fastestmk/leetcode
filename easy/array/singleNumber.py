def singleNumber(nums):
	single = nums[0]
	for x in range(1, len(nums)):
		single ^= nums[x]
	return single	

# def singleNumber(self, nums):
#     return reduce(lambda x, y: x ^ y, nums)	