def groupAnagrams(strs):
	ans = collections.defaultdict(list)
	for item in strs:
		ans[''.join(sorted(item))].append(item)
	# print(ans)
	ans_list = []
	for value in ans.values():
		ans_list.append(value)
	return ans_list
	
if __name__ == '__main__':
	strs = ["eat","tea","tan","ate","nat","bat"]
	groupAnagrams(strs)		