// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         unordered_map <int, int> count_map;
//         int nums_size = nums.size();
//         int maj_ele;
//         for (int i : nums) { // range based for loop
//             count_map[i]++;
//         }
//         // for (auto& [digit, count] : count_map) {
//         //     cout << "digit = " << digit << "count = " << count << "\n";
//         // }
//         // return 0;
//         for (auto& [digit, count] : count_map) {
//             if (count > nums_size/2 ) {
//                 maj_ele = digit;
//             }
//         }
//     return maj_ele;
//     }
// };

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int, int> count_map;
        int nums_size = nums.size();
        int maj_ele;
        for (int i : nums) { // range based for loop
            count_map[i]++;
            if (count_map[i] > nums_size/2) {
                maj_ele = i;
            }
        }
    return maj_ele;
    }
};