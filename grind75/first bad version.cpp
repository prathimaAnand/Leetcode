// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        // binary search
        int l = 1, r = n;
        while(l < r)  { // loop until search range shrinks to 1 element
            int m = l + (r-l)/2;
            /* (right - left) is at most INT_MAX (since right >= left).
            Adding (right - left)/2 to left will never exceed INT_MAX.
            So no overflow.*/
            if(isBadVersion(m)) { // If mid is bad, the first bad version is at mid or earlier
                r = m; // if mid is bad then ignore everything after that
            }
            else {
                l = m + 1;
            }
        }
        return l; // At the end, left == right and points to the first bad version
    }
};