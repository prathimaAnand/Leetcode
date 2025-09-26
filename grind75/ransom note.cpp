class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> map;
        // count freq of chars
        for(char c: ransomNote) {
            map[c]++;     
        }
        for(char d: magazine) {
            if(map.find(d) != map.end()) {// if char exists in map
                map[d]--; // decrease its count
                if(map[d] == 0) {
                    map.erase(d); // remove char from map
                }
            }
        }
        return map.empty();
    }
};