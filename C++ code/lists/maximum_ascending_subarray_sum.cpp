class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int curr = nums[0];
        int max_res = curr;

        for(int i=1; i<size(nums); i++){
            if(nums[i-1] < nums[i]){
                curr += nums[i];
            }
            else{
                curr = nums[i];
            }  
            max_res = std::max(max_res, curr);
        }
        return max_res; 
    }
};