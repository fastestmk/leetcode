# def removeDuplicates(num_list):
# 	n = len(num_list)
# 	vis = [0]*n
# 	res = list()
# 	for i in num_list:
# 		if not(vis[i]):
# 			res.append(i)
# 			vis[i] = 1

# 	for i in res:
# 		print(i, end=" ")
# 	print()			
# 	return len(res)

def removeDuplicates(num_list):
	j = 0
	n = len(num_list)
	if n == 0:
		return 0
	for i in range(n-1):
		if num_list[i] != num_list[i+1]:
			num_list[j] = num_list[i]
			j += 1
	num_list[j] = num_list[n-1]
	j += 1
	for i in num_list:
		print(i, end=" ")
	print()			
	return j

	
if __name__ == '__main__':
	num_list = [1, 2, 3, 3, 4, 5, 5]
	print(removeDuplicates(num_list))			
