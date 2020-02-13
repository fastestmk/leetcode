void setZeroes(vector<vector<int>>& matrix){
	int m = matrix.size();
	int n = matrix[0].size();
	bool row_flag = false, col_flag = false;

	for(int i = 0; i < m; ++i){
		for(int j = 0; j < n; ++j){
			if(i == 0 && matrix[i][j] == 0)
				row_flag = true;
			if(j == 0 && matrix[i][j] == 0)
				col_flag = true;
			if(matrix[i][j] == 0){
				matrix[i][0] = 0;
				matrix[0][j] = 0;
			}
		}
	}

	for(int i = 1; i < m; ++i){
		for(int j = 1; j < n; ++j){
			if(matrix[0][j] == 0 || matrix[i][0] == 0)
				matrix[i][j] = 0;	
		}
	}
	if(row_flag == true){
		for(int i = 0; i < n; ++i){
			matrix[0][i] = 0;
		}
	}
	if(col_flag == true){
		for(int i = 0; i < m; ++i){
			matrix[i][0] = 0;
		}
	}

	for(int i = 0; i < m; ++i){
		for(int j = 0; j < n; ++j){
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
