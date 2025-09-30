class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {

        // set<pair<int, int>> visited;
        int islands = 0;
        int ROWS = grid.size(), COLS = grid[0].size();

        for (int i = 0; i < ROWS; i ++) {
            for (int j = 0; j < COLS; j ++) {
                if (grid[i][j] == '1') {
                    bfs(grid, i, j); // check for neighbors
                    islands += 1;
                }
            }
        }
        return islands;
    }

    void bfs(vector<vector<char>>& grid, int r, int c) {

        vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        queue<pair<int, int>> q;
        q.push({r,c});
        grid[r][c] = '0'; // mark as visited

        while (!q.empty()) { // queue is building island
            auto [row, col] = q.front();
            q.pop();

            for (auto [dr, dc] : directions) { // checks all four directions
                int nr = dr + row, nc = dc + col;
                    
                if ( nr >= 0 && nc >= 0 && 
                    nr < grid.size() && nc < grid[0].size() &&
                    grid[nr][nc] == '1' ) { // if its 1 &  within bounds
                    q.push({nr, nc});
                    grid[nr][nc] = '0';
                }
            }
        }
    }

};