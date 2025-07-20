class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // easy to count occurances
        unordered_map<int,int> count;
        for (int n: nums){
            count[n]++;
        }
        // vector to store key:value pairs - key:freq & value:num
        vector<pair<int, int>> arr;
        for (const auto& p : count){
            arr.push_back({p.second, p.first});
        }
        // sort T:O(n log n)
        sort(arr.rbegin(), arr.rend());
        // count top k elements
        vector<int> res;
        for(int i = 0; i < k; i++){
            res.push_back(arr[i].second);
        }
        return res;
    }
};

// Pseudo code
// 1. Create an unordered_map - uses hashing - O(1) for operations - T:O(n), S:O(n)
// 2. Count frequency of each element, keys: frequency value: actual number - 
// 3. Convert map to vector {frequency, number} example: {{3, 1}, {2, 2}, {1, 3} - T:O(n), S:O(n)
// 4. sort - T: O(nlogn)
// 5. According to givem k value, push value to result - T:O(k), S:O(k)
// Total: T:O(n log n) , S:O(n)
