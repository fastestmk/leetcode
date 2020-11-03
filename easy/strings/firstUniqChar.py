def firstUniqChar(s):
	for i in s:
		if i in s and s.count(i) == 1:
			return s.index(i) 
	return -1