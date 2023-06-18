
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> hashS, hashT;
        if (s.size() != t.size())
            return false;

        for (int i = 0; i < s.size(); i++) {
            hashS[s[i]] = 1 + hashS[s[i]]; // to update count in hashmap for every character
            hashT[t[i]] = 1 + hashT[t[i]];
        }
        for (int j : hashS) {
            if (hashS[s[j]] != hashT[t[j]])
                return false;
        }
        return true;

    }
};
