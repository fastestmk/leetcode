def rotateImage(matrix):
	m, n = len(matrix), len(matrix[0])
	print(matrix)
	for i in range(m):
		for j in range(i, n):
			matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]

	for i in range(m):
		for j in range(n//2):
			matrix[i][j], matrix[i][n-1-j] = matrix[i][n-1-j], matrix[i][j]		

	print(matrix)	



if __name__ == '__main__':	
	matrix = [[1,2,3],[4,5,6],[7,8,9]]
	rotateImage(matrix)