
def lengthOfLongestSubstring(s):	 				 				
	used = {}
	start = -1; maxLen = 0
	for x, c in enumerate(s):
		if c in used and used[c] > start:
			start = used[c]
		used[c] = x
		maxLen= max(maxLen, x-start)
	return maxLen