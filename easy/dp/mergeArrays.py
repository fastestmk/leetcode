def merge(nums1, m, nums2, n):
	i = m-1; j = n-1
	k = m+n-1 # total indexes in nums1 list

	while i >= 0 and j >= 0:
		if nums1[i] > nums2[j]:
			nums1[k] = nums1[i]
			k -=1; i -=1
		else:
			nums1[k] = nums2[j]
			k -=1; j-=1

	while j >= 0:
		nums1[k] = nums2[j]
		k -=1; j -=1;		

	for num in nums1:
		print(num, end=' ')
	print()	