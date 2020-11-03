def subsets(nums):
	n = len(nums)
	total_subsets = 2**n
	subset_list = []
	for i in range(total_subsets):
		subset = []
		for j in range(n):
			if i & (1 << j):
				subset.append(nums[j])
		subset_list.append(subset)
	return subset_list			

if __name__ == '__main__':
	nums = [1,2,2]
	print(subsets(nums))	