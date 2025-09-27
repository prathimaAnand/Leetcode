class Solution {
public:
    int romanToInt(string s) {
        // hashmap to store romans
        // if larger then smaller - add larger to result
        // if smaller then larger - subtract smaller from result
        int result = 0;
        unordered_map<char, int> roman = {
            {'I', 1}, {'V', 5}, {'X', 10}, 
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}, 
        };

        for (int i = 0; i < s.size(); i ++) {
            if (i + 1 < s.size() && roman[s[i]] < roman[s[i+1]]) {
                result -= roman[s[i]];
            }
            else {
                result += roman[s[i]];
            }
        }
        return result;
    }
};