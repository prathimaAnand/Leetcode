class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // target = index1 + index2;
        // index2 = target - index1;
        // index2 = 3 - 1; = 2; - there's always a solution
        int n = numbers.size() - 1;
        int left = 0, right = n;
        while (left < right) {
            if ( numbers[left] + numbers[right] > target ) {
                // decrease sum
                right -= 1;
            }
            else if (numbers[left] + numbers[right] < target ) {
                // increase sum
                left += 1;
            }
            else {
                /*
                vector<int> result = result.push_back(left + 1); // result is extra space
                result = result.push_back(right + 1)
                */
                return { left + 1, right + 1};
            }
        }
    }
};

