class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        int old_color = image[sr][sc];

        // start pixel's color is already same as new color -> return image
        if (old_color == color) return image;
        dfs(image, old_color, color, sr, sc);
        return image;
    }
    void dfs(vector<vector<int>>& image, int old_color, int new_color, int sr, int sc) {
                
        int r = image.size(), c = image[0].size();

        // check for out of bounds
        if (sr >= r || sc >= c || sr < 0 || sc < 0){
            return;
        } 

        //stop if a pixel is not old or orginal or same as start pixel color
        if (image[sr][sc] != old_color) return;

        // change old to new color
        image[sr][sc] = new_color;
        
        // check its neighbors
        vector<pair<int,int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        for(auto [dr, dc] : directions){
            dfs(image, old_color, new_color, sr + dr, sc + dc);// calling dfs recurssively for neighbors
        }

    }
};