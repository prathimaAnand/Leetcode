class Solution {
public:
    vector<vector<int>> directions = {  {1, 0}, 
                                        {-1, 0}, 
                                        {0, 1},
                                        {0, -1} };
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size(), col = grid[0].size();
        int island = 0;
        for (int i = 0; i < row; i++){
            for (int j = 0; j < col; j++){
                if (grid [i][j] == '1') {
                    // check for island
                    bfs(grid, i, j);
                     island += 1;
                }
            }
        }
        return island;
    }

    void bfs(vector<vector<char>>& grid, int r, int c) {
        queue<pair<int, int>> q;
        // mark visited
        grid[r][c] = '0';
        q.push({r, c});

        while (!q.empty()) {
            // take fist cell from queue 
            auto node = q.front();
            q.pop();
            int r = node.first, c = node.second;
            // check all 4 directions for neighbors
            for (int i = 0; i < 4; i++) {
                int nr = r + directions[i][0];
                int nc = c + directions[i][1];
                // check within grid range and is island
                if (nr >= 0 && nc >= 0 && nr < grid.size() && nc < grid[0].size() && grid[nr][nc] == '1') {
                    // push to queue for next iteration
                    q.push({nr, nc});
                    // mark as visted 
                    grid[nr][nc] = '0';
                }
            }
        }
    }
};
