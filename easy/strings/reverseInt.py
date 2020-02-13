def reverse(x):
	sign = [1,-1][x < 0] # return -1 if x < 0
	reverse = sign*int(str(abs(x))[::-1])
	return reverse if -(2**31)-1 < reverse < 2**31 else 0