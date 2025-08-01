class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, 1); // IN PYTHON: res = [0] * n
        int prefix = 1;
        for(int i=0; i< n; i++){
            res[i] = prefix;
            prefix *= nums[i];
        }
        int postfix = 1;
        for(int j = n-1 ; j >= 0; j--){
            res[j] *= postfix;
            postfix *= nums[j];
        }
        return res;
    }
};


// Input: nums (an array of integers)
// Output: result (product of array except self)
/*
1. Initialize an array `result` of the same length as `nums` and fill it with 1s.
2. Set `prefix` = 1
3. Loop i from 0 to n-1:
     a. Set result[i] = prefix
     b. Update prefix = prefix * nums[i]

4. Set `postfix` = 1
5. Loop i from n-1 to 0:
     a. Update result[i] = result[i] * postfix
     b. Update postfix = postfix * nums[i]

6. Return result
*/