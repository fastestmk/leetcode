def groupAnagrams(strs):
	hashmap = {}
	for s in strs:
		key = ''.join(sorted(s))
		if key in hashmap:	
			hashmap[key] += [s]
		else:
			hashmap[key] = [s]

	for i in hashmap.values():
		print(i, end=" ")
	print()	