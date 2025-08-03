/* psuedo code

1. Initialize empty list, area and integer res
2. Set left pointer, l = 0 and right pointer, r = height.size() - 1
3. while l < r:
    a. area = r - l * min(height[l], height[r]) 
        res = max(res, area)
    b. if height[l] < height[r]:
        l ++
    c. else
        r --
4. return res
*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int res = 0, l = 0, r = height.size() - 1;
        while(l < r){
            int area = (r - l) * min(height[l], height[r]);
            res = max(res, area);
            if(height[l] < height[r]){
                l ++;
            }
            else{
                r --;
            }
        }
            return res;
    }
};

// Time & Space Complexity

//     Time complexity: O(n)O(n)
//     Space complexity: O(1)O(1)
