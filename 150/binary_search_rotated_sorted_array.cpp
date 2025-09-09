class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        
        while(l <= r){
            int m = (l + r) / 2;
            if (target == nums[m]) {
                return m;
            }
            // check if we are in left sorted portion  
            if (nums[l] <= nums[m]) {
                if(target > nums[m] || target < nums[l]){
                    l = m + 1; // go right
                }
                else{
                    r = m - 1; // go left
                }
            }
            else{
                if(target < nums[m] || target > nums[r]){
                    r = m - 1; // go left
                }
                else{
                    l = m + 1; // go right
                }
            }
        }
        return -1;
    }
};
