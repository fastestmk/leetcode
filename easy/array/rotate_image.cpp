int m, n;

void solve(vector<vector<int> > &matrix){
	int col = matrix[0].size()-1;
	for(int i = 0; i < n/2; ++i){
		for(int j = 0; j < m; ++j){
			swap(matrix[j][i], matrix[j][col]); // swapping columns
		}
		col--;
	}
}

void transpose(vector<vector<int> > &matrix){
	for(int i = 0; i < m; ++i){
		for(int j = i; j < n; ++j){
			swap(matrix[i][j],matrix[j][i]);
		}
	}
}
	
void rotate(vector<vector<int>>&matrix) {
	m = matrix.size();
	n = matrix.size();
	transpose(matrix);
	solve(matrix);
}