// 
/*
prefix and post fix technique but not using arrays to store them 
memory - O(1)
Time - O(n)

*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int numsSize = nums.size();
        // int res[] = 1 * numsSize;
        vector<int> res(nums.size(), 1);

        int prefix = 1;
        for(int i = 0; i<numsSize ; i++){
            res[i] = prefix;
            prefix *= nums[i];
        }
        int postfix = 1;
        for (int i = numsSize -1; i>=0 ; i--){
            res[i] *= postfix;
            postfix *= nums[i];
        }
        return res;
        
    }
};
