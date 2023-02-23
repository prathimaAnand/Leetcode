https://leetcode.com/problems/is-subsequence/submissions/903302538/
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;
        while (i< s.size() && j <t.size())
        {
            if (s[i] == t[j])
                i+=1;   
            j+=1;
        }
        if (i == s.size())
            return true;
        else 
            return false;
    }
};

runtime = O ms
memo = 6.4 MB
