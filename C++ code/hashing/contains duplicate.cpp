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

//above code can be solved using sorting & then checking adjacent pairs
// but time: O(nlogn)
// memory: O(1)

// using hashset as tutorial
// compromising memory : O(n)
// time : O(n)


