"""
Brut force technique :
check with each character with each other
Linear scan for every single substring = n * n^2 -> Time = O(n^3)
To improve:
keep a middle character and expand outward and check if they palindrome
Edge case : It does not work for even palindromes
fix it in code
"""
class Solution {
public:
    string longestPalindrome(string s) {
        res = []
        resLen = 0

        for i in range(len(s))
        # for odd set
        l, r = i, i
        while(l >= 0 and r <= len(s) and s[l] == s[r])
            if(r - l + 1 > res)
                res = s[l:r+1]


    }
};
