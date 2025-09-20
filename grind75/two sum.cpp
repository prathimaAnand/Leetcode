// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
        
//         // using sorting and two pointers
//         // a = 3, target = 6
//         // left at 0
//         // right at end - 1
//         // sum > target so right - 1
//         // sum < target so left + 1
        
//         int size = nums.size();
//         int left = 0, right = size - 1;
//         int sum = 0;
//         vector<pair<int, int>> arr;

//         // store original index in a pair
//         for (int i = 0; i < size; i++) {
//             arr.push_back({nums[i], i}); //pair(value, index)
//         }
//         // sort by value but keeps original indicies
//         sort(arr.begin(), arr.end()); // directly sorting nums - loose original indices !!!

//         while(left < right) { // equal sign?
//             sum = arr[left].first + arr[right].first;
//             if (sum < target) {
//                 left += 1;
//             }
//             else if (sum > target) {
//                 right -= 1;
//             }
//             else {
//                 return {min(arr[left].second, arr[right].second), max(arr[left].second, arr[right].second)}; // to return indices in order
//             }
//         }
//         return {};
//     }
// };

/*  using b = sum - a and hashmap
    target = a + b
    b = target - a -> b should exist - instantly check b using hashmap
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i ++) {
            int b = target - nums[i];
            // check if b is in hashmap
            if (map.find(b) != map.end()) {
                return {map[b], i};
            }
            map.insert({nums[i], i}); // value, index
        }
        return {};
    }
};

