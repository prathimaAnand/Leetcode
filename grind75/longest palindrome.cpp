class Solution {
public:
    int longestPalindrome(string s) {
    // count freq of char
    if(s.size() == 1) return s.size();
    int result = 0;
    unordered_map<char, int> count_map;

    for(char c: s) {
        count_map[c]++;
        // even count of chars - increment result by 2 for every pair
        if(count_map[c] % 2 == 0) {
            result += 2;
        }
    }
    for(auto& [ch,cnt] : count_map) {
        // if odd count in hash map - increment result by 1
        if (cnt % 2 == 1) {
            result += 1;
            break;
        }
    }
    return result;
    }
};