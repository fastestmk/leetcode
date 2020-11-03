def setZeroes(matrix):
	m = len(matrix)
	n = len(matrix[0])

	row_flag = False; col_flag = False

	for i in range(m):
		for j in range(n):
			if i == 0 and matrix[i][j] == 0:
				row_flag = True
			if j == 0 and matrix[i][j] == 0:
				col_flag = True
			if matrix[i][j] == 0:
				matrix[i][0] = 0
				matrix[0][j] = 0

	for i in range(1,m):
		for j in range(1,n):
			if matrix[i][0] == 0 or matrix[0][j] == 0:
				matrix[i][j] = 0
	
	if row_flag == True:
		for i in range(n):
			matrix[0][i] = 0

	if col_flag == True:
		for i in range(m):
			matrix[i][0] = 0

	print(matrix)	