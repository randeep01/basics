#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	void dfs(vector<vector<char>>& grid, int i, int j) {
		if (i < 0 || j<0 || i >= grid.size() || j>=grid[0].size() || grid[i][j] == '0') {
			return;
		}
		grid[i][j] = 0;
		dfs(grid, i + 1, j);
		dfs(grid, i - 1, j);
		dfs(grid, i, j + 1);
		dfs(grid, i, j - 1);
	}
	int numOfIslands(vector<vector<char>>& grid) {
		if (grid.empty()) return 0;
		int numIsland = 0;

		int row = grid.size();
		int col = grid[0].size();
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				if (grid[i][j] == '1') {
					++numIsland;
				}
				dfs(grid, i, j);
			}
		}
		return numIsland;
	}
};
int main() {
	Solution s;
	vector<vector<char>> test =
	{
		{'1','1','1','1','0'},
		{'1','1','0','1','0'},
		{'1','1','0','0','0'},
		{'0','0','0','0','0'}
	};
	int islands = s.numOfIslands(test);

	cout << islands << endl;
}