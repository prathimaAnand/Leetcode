class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // hash map that key->values - values has be unique - set
        unordered_map<int, unordered_set<char>> rows, cols;
        map<pair<int,int>, unordered_set<char>> sub_box;
        int board_size = board.size();
        // iterate through each value 
        for (int r = 0; r < board_size; r ++) {
            for (int c = 0; c < board_size; c ++) {
                if (board[r][c] == '.') {
                    continue;
                }
                // integer division (truncating fractional part) to get particular value in 9 sub boxes

                pair<int, int> sub_box_key = {r / 3, c / 3};
                // check for duplicates
                if (rows[r].count(board[r][c]) || cols[c].count(board[r][c]) || sub_box[sub_box_key].count(board[r][c]) ) {
                    return false;
                }
                // if not found add to maps
                rows[r].insert(board[r][c]);
                cols[c].insert(board[r][c]);
                sub_box[sub_box_key].insert(board[r][c]);
            }
        }
        return true;
    }
};
