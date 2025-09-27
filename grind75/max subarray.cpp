class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int max_sub = nums[0];
        // calculate sum
        for (int i = 0; i < nums.size(); i ++) {
            // sum += nums[i];
            if (sum < 0) {
                sum = 0;
            }
            sum += nums[i];
            max_sub = max(max_sub, sum);
        }
        std::cout<<"sum: " << sum << "\n";
        std::cout<<"max_sub: " << max_sub << "\n";
        return max_sub;
    }
};