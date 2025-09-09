class Solution {
public:
    int findMin(vector<int> &nums) {
        int l = 0, r = nums.size() - 1, min_result = nums[0];
        while(l <= r){
            int m = (l+r)/2;
            // if its a sorted array
            if(nums[l] < nums[r]){
                min_result = min(min_result, nums[l]);
                // return min_result;
                break; // to avoid execution of further lines
            }
            min_result = min(min_result, nums[m]);
            // not sorted or rotated
            if(nums[m] >= nums[l]){
                l = m + 1;
            }
            else{
                r = m - 1;
            }
        }
        return min_result;
    }
};
