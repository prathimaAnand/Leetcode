/*
Once you get a duplicate stop searching for duplicates
remove from left
using "set" which does not contain duplicates
Memory & Time - O(n)
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, res = 0;
        set<char> charSet;
        
        for(int r = 0; r < s.length(); r ++) {
            while (charSet.find(s[r]) != charSet.end()) {
                    charSet.erase(s[l]);
                    l++;
                }
                charSet.insert(s[r]);
                res = max(res, r - l + 1);
        }
        return res;
    }
};



