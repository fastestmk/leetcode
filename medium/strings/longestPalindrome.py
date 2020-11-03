def longestPalindrome(s):
	n = len(s)
	low = 0; high = 0; start = 0; maxlength = 1;

	for x in range(1, n):
		# for even length substring
		low = x-1
		high = x
		while low >= 0 and high < n and s[low] == s[high]:
			if maxlength < high-low+1:
				maxlength = high-low+1
				start = low
			low -= 1
			high += 1


		# for odd length substring
		low = x-1
		high = x+1
		while low >= 0 and high < n and s[low] == s[high]:
			if maxlength < high-low+1:
				maxlength = high-low+1
				start = low
			low -= 1
			high += 1	

	return s[start:start+maxlength]	
		