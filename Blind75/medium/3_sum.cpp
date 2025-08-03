/*
psuedo code: 3 sum
1. Initialize an empty list of lists, res
2. sort input array: sort(nums)
3. loop through array from i =0 to len(nums) - 1
    a. if nums > 0: break loop (no trplet can sum to 0 beyond this)
    b. if i > 0 and nums[i] == nums[i-1]: continue ( to skip "a" duplicate)
4. set left pointer: l = i + 1 and right pointer : r = len(nums)-1
5. while l < r:
    a. calculate sum = nums[i] + nums[l] + nums[r]
    b. if sum > 0: r -= 1
    c. if sum < 0: l += 1
    b. else:
        1. add nums[i] + nums[l] + nums[r] = res
        2. move l+= 1 and r -= 1
        3. while l < r and nums[i] == nums[i - 1]: l += 1
6. return res

*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0){
                break; // no triplets can sum to 0 beyond this
            }
            if(i > 0 and nums[i] == nums [i - 1]){
                continue; // to skip "a" duplicate
            } 
            int l = i + 1, r = nums.size() - 1;
            while(l < r){
            int sum = nums[i] + nums[l] + nums[r];
            if(sum > 0){
                r -= 1;
            }
            else if (sum < 0){
                l += 1;
            }
            else{
                res.push_back({nums[i],nums[l], nums[r]});
                r -= 1;
                l += 1;
                while( l < r && nums[l] == nums[l - 1]){
                    l -= 1;
                }
            }
            }
        }
        return res;
    }
};