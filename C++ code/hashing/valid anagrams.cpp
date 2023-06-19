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
        for (const auto& pair : hashS) {
            char character = pair.first; // each val's key is stored in character
    //         int count = pair.second;
    // cout << "Character: " << character << ", Count: " << count << endl;
            if (hashS[character] != hashT[character])
                return false;
        }
        return true;

    }
};
