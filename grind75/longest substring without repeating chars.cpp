// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         // count freq
//         string str;
//         unordered_map <char, int> map;
//         for (char c : s) {
//             map[c]++;
//             if (map[c] == 1) {
//                 str.push_back(c);
//             }
//         }
//         return str.size();
//     }
// };

// above just counts unique chars

// sliding window approach
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, max_len = 0;
        unordered_map <char, int> freq;
        for (int r = 0; r < s.size(); r++) {
            freq[s[r]]++;
            // expand r for substring
            while ( freq[s[r]] > 1 ) {
            // if duplicate found shrink from l
            // So we decrement the count of s[l] (leftmost character) and then move l++
                freq[s[l]]--;
                l += 1; 
            }
            max_len = max(max_len, r - l + 1);
        }
        return max_len;
    }
};