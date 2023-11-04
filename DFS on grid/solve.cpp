#include <iostream>
#include <vector>

using namespace std;

void dfsOnGrid(vector<vector<int>>& grid, int row, int col, vector<vector<bool>>& vis) {
    vis[row][col] = true;
    int m = grid.size();
    int n = grid[0].size();

    if (col + 1 < n && !vis[row][col + 1]) {
        dfsOnGrid(grid, row, col + 1, vis); // right
    }

    if (row + 1 < m && !vis[row + 1][col]) {
        dfsOnGrid(grid, row + 1, col, vis); // down
    }

    if (row - 1 >= 0 && !vis[row - 1][col]) {
        dfsOnGrid(grid, row - 1, col, vis); // up
    }

    if (col - 1 >= 0 && !vis[row][col - 1]) {
        dfsOnGrid(grid, row, col - 1, vis); // left
    }
}

int main() {
    vector<vector<int>> grid = {{4, 4, 5, 9},
                                {1, 0, -1, 2},
                                {3, 6, 8, 10}};

    int row = grid.size();
    int col = grid[0].size();
    vector<vector<bool>> vis(row, vector<bool>(col, false));

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            dfsOnGrid(grid, 0, 0, vis);
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
