class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        vector<vector<string>> result;

        // count freq and add to a list
        for (auto s : strs) {
            vector<int> count(26, 0);
            for (auto c : s) {
                count[c - 'a'] += 1;
            }
            // convert that list to string with commas -> key
            string key = to_string(count[0]);
            for (int i = 1; i < 26; i++) {
                key += ',' + to_string(count[i]);
            }
            // push anagrams to that key
            map[key].push_back(s);
        }
        // iterate and get strings from map
        for (auto pair : map) {
            result.push_back(pair.second);
        }
        return result;
    }
};
