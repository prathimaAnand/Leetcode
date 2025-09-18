class Solution {
    vector<pair<int, int>> directions = {{1,0}, {-1, 0}, {0, 1}, {0, -1}};
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        // water flows
        // if cell height >= neighbor's height 
        // flows into ocean from cells adjacent to ocean
        // find water flow into both oceans
        int row = heights.size(), col = heights[0].size();
        vector<vector<bool>> pac(row, vector<bool>(col, false));
        vector<vector<bool>> atl(row, vector<bool>(col, false));
        vector<vector<int>> result;

        // check the box
        for (int c = 0; c < col; c++) {
            // pac - top row
            dfs(0, c, pac, heights);
            // atl - bottom row
            dfs(row - 1, c, atl, heights);
        }

        for (int r = 0; r < row; r++) {
            // pac - left col
            dfs(r, 0, pac, heights);
            // atl - right col
            dfs(r, col - 1, atl, heights);
        }

        for (int r = 0; r < row; r++){
            for (int c = 0; c < col; c++){
                if (pac[r][c] && atl[r][c]){
                    result.push_back({r, c});
                }
            }
        }
        return result;
    }
    void dfs(int r, int c, vector<vector<bool>>& ocean, vector<vector<int>>& heights) {
        // mark cell as visited
        ocean[r][c] = true;

        // check neighbors in 4 directions
        for (auto [dr, dc] : directions) {
            int nr = r + dr, nc = c + dc;
            
            // skip if already visited, within bounds, heights are greater than previous
            if (nr >= 0 && nr < heights.size() &&
                nc >= 0 && nc < heights[0].size() 
                && !ocean[nr][nc] 
                && heights[nr][nc] >= heights[r][c] ) {
                dfs(nr, nc, ocean, heights);
            }
        }
    }
};
