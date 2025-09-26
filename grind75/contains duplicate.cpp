class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // count the freq
        unordered_map<int, int> count_map;
        for (int i: nums) {
            count_map[i]++;
        }
        for (auto& [n, cnt] : count_map) {
            std::cout<< "n = " << n << " "<< "cnt = " << cnt << "\n";
        }

        // in hash map if any freq is higher than 1 then return false
        for (auto& [n, cnt] : count_map) {
            if(count_map[n] > 1) {
                std::cout<< "n = " << n << " "<< "cnt = " << cnt << "\n";
                return true;
            }
        }
        return false;
    }
};