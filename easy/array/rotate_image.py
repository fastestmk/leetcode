def solve(matrix):
	col = len(matrix[0])-1
	for i in range(n//2):
		for j in range(m):
			matrix[j][i], matrix[j][col] = matrix[j][col], matrix[j][i] # swapping columns
		col -= 1		

def transpose(matrix):
	for i in range(m):
		for j in range(i, n):
			matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]

def rotate(matrix):
	global m, n
	m = len(matrix)
	n = len(matrix[0])
	print(n)
	transpose(matrix)
	solve(matrix)
	print(matrix)