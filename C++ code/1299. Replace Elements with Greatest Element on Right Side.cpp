# link : https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/submissions/901793970/
# Reverse order calculation to avoid iterating and checking every value in the array, whihc takes up memory = O(n^2)

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int rightMax = -1, newMax;
        for( int i = arr.size()-1; i >=0 ; i--){
            newMax = max(rightMax, arr[i]);
            arr[i] = rightMax;
            rightMax = newMax;
        }
    return arr;
    }
};

memory : O(n)
