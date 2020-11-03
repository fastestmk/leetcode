def rotateArray(num_list, k):
	num_list[:] = num_list[k+1:]+num_list[:k+1]
	print(num_list)
