class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> sum(nums.size(), 1);
        int prefix = 1;

        // prefix and postfix but without using those arrays 
        for (int i = 0; i < nums.size(); i ++) {
            sum[i] = prefix;
            prefix *= nums[i];
        }
        int postfix = 1;
        for (int i = nums.size() - 1; i >= 0; i --) {
            sum[i] *= postfix;
            postfix *= nums[i];
        }
        return sum;
    }
};