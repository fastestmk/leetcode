vis = [[0 for j in range(1234)] for i in range(1234)]

rowNbr = [-1, 0, 0, 1]
colNbr = [0, -1, 1, 0]

def isSafe(x, y, grid):
	return True if x >= 0 and x < len(grid) and y >= 0 and y < len(grid[0]) else False

def dfs(row, col, grid, vis):
	vis[row][col] = 1
	for i in range(4):
		x = row+rowNbr[i]
		y = col+colNbr[i]
		if isSafe(x, y, grid) and (not vis[x][y]) and grid[x][y] == '1':
			dfs(x, y, grid, vis)

def noOfIslands(grid):
	islands = 0
	m = len(grid)
	n = len(grid[0])
	# global vis; rowNbr; colNbr

	for i in range(m):
		for j in range(n):
			if not vis[i][j] and grid[i][j] == '1':
				dfs(i, j, grid, vis)
				islands += 1

	return islands		

if __name__ == '__main__':
	grid = [['1','1','0','0','0'], 
			['0','0','0','0','0'],
			['0','0','1','0','0'], 
			['0','0','0','1','1'] ]
	print(noOfIslands(grid))		