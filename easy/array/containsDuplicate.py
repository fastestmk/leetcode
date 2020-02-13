def containsDuplicates(nums):
	duplicates = []
	for num in nums:
		if num in duplicates:
			return True
		else:	
			duplicates.append(num)
	return False	