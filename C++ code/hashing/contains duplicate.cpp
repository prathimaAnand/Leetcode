// own code
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool checker;
        // iterate through list & check if each val is equal or not
        for(int i =0; i < nums.size(); i++){
            if(nums[i] == nums[i+1]) //goes out of bounce & checks only consecutive elements
                checker = true;
            checker = false;
        }
        return checker;
    }
};

// using hashset as tutorial
