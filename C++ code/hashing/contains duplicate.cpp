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

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> hashSet; 
        for(int i = 0;i<n; i++){
            if(hashSet.count(nums[i])) //if element is present or not -> can not use 'n' directly like in python
                return true;
            hashSet.insert(nums[i]);
        }
        return false;
    }
};


