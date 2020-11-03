#include<iostream>
#include<vector>
#include<cmath> 
#include<algorithm>
#include<unordered_set>
#include<set>
#include<string>
#include<map>
#include<unordered_map>
#include<cstring>
#include<stack>
#include<queue>
#include<climits>

using namespace std;

#define ll long long

const int INF = 1e9+7;
const int mod = 1e9+7;
const int MAX = 1e5+5;

bool vis[1234][1234];

vector<int> rowNbr{-1,0,0,1};
vector<int> colNbr{0,-1,1,0};

bool isSafe(int x, int y, vector<vector<char> >grid){
	if(x < grid.size() && x >= 0 && y < grid[0].size() && y >= 0)
		return true;
	return false;
}

void dfs(int row, int col, vector<vector<char>> grid){
	vis[row][col] = true;
	for(int i = 0; i < 4; ++i){
		int x = row + rowNbr[i];
		int y = col + colNbr[i];
		if(isSafe(x, y, grid) && !vis[x][y] && grid[x][y] == '1'){
			dfs(x, y, grid);
		} 
	}
}

int numIslands(vector<vector<char>> &grid){
	int islands = 0;
	for(int i = 0; i < grid.size(); ++i){
		for(int j = 0; j < grid[0].size(); ++j){
			if(!vis[i][j] && grid[i][j] == '1'){
				dfs(i, j, grid);
				islands++;
			}		
		}
	}
	return islands;
}

int main(){
	//freopen("tree.in","r",stdin);
    //freopen("tree.out","w",stdout);
    //freopen("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);

 	vector<vector<char> > grid{ {'1','1','1','1','0'}, 
 								{'1','1','0','1','0'},
 								{'1','1','0','0','0'}, 
 								{'0','0','0','0','0'} };
 	cout << numIslands(grid) << endl;
}