import collections	
def isAnagram(s,t):
	n = len(s)
	if len(s) != len(t):
		return False
	hash = collections.defaultdict(int)
	for i in range(n):
		hash[s[i]] += 1
		hash[t[i]] -= 1
	for x in s:
		if hash[x]:
			return False