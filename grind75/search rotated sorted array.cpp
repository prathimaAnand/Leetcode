class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        while (l <= r) {
            int m = (l + r) / 2;
            if (nums[m] == target) {
                return m;
            }
            
            // left sorted portion
            if (nums[l] <= nums[m]) {
                if (target >= nums[l] && target < nums[m]) {
                    r = m - 1; // search left
                }
                else {
                    l = m + 1; // search right
                }
            }
            // right sorted portion
            else {
                if (target > nums[m] && target <= nums[r]) {
                    l = m + 1; // search right
                }
                else {
                    r = m - 1; // search left
                }
            }
        }
    return -1;
    }
};