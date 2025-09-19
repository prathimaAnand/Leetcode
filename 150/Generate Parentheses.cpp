class Solution {
public:

    void back_track(int open_count, int close_count, int n, vector<string>& result, string& stack) {
        // add to result if open == close = n
        if (open_count == close_count && open_count == n) {
            result.push_back(stack);
            return;
        }

        // add open if open < n
        if (open_count < n) {
            stack += '(';
            back_track(open_count + 1, close_count, n, result, stack);
            stack.pop_back();
        }
        if (close_count < open_count) {
            stack += ')';
            back_track(open_count, close_count + 1, n, result, stack);
            stack.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        // add open if open < n
        // add close if close < open
        // add to result if open == close = n
        vector<string> result;
        string stack;
        back_track(0, 0 , n, result, stack);
        return result;

    }
};
