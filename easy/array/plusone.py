def plusone(digits):
	n = len(digits)
	for x in range(n-1, -1, -1):
		digits[x] += 1
		if digits[x] < 10:
			return digits
		digits[x] = 0
	
	digits[0] = 1 # if digits = {9,9,9}
	digits.append(0)
	return digits		