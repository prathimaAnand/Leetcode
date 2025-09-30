class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int ROWS = grid.size(), COLS = grid[0].size();
        int fresh = 0, time = 0;
        queue<pair<int, int>> q;

        // check for rotten and fresh
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                if (grid[i][j] == 1) {
                    fresh += 1;
                }
                else if (grid[i][j] == 2) {
                    q.push({i, j});
                }
            }
        }

        // popping rotten, if adjacent ones are fresh - make it rotten
        vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        while (!q.empty() && fresh > 0) {  

            // one unit of time
            int q_size = q.size();
            for (int i = 0; i < q_size; i ++) { // iterate through each layer
                auto [r, c] = q.front(); // rotten cell
                q.pop();

                for (auto [dr, dc] : directions) {
                    int nr = r + dr, nc = c + dc;
                    // if out of bounds and rotten then continue
                    if (nr < 0 || nc < 0 || 
                        nr >= grid.size() || nc >= grid[0].size() 
                        || grid[nr][nc] != 1) {
                            continue;
                        }
                    // within bounds and fresh
                    grid[nr][nc] = 2;
                    q.push({nr, nc});
                    fresh -= 1;
                }
            }
            time += 1;
        }
        return fresh == 0 ? time : -1;
    }
};