/*
Brute force way - to compare each value with every other value
memory - O(n^2)
exceeds the time complexity

to reduce memory and time
other way - keep left and right pointer at the ends
compute area at each time and keep the highest one, parallely
compare the pointers and shift the one that is lower to one point and travse through the entire set
When left pointer is = right then terminate the operation
*/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int res = 0, area = 0;
        int l= 0, r = height.size() - 1;
        while(l<r){
            area = (r - l) * min(height[l], height[r]);
            res = max(res, area);
            if(height[l] < height[r])
                l++;
            else
                r--;
        }
        return res;
    }
};
