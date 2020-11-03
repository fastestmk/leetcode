def majorityElement(nums):
	min_occurence = len(nums)//2
	frq = {}
	for num in nums:
		frq[num] += 1
		if frq[num] > min_occurence:
			return num	

if __name__ == '__main__':
	nums = [2,2,1,1,1,2,2]
	majorityElement(nums)	