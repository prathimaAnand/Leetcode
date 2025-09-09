class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int result = 0;
        sort(intervals.begin(), intervals.end());
        int prev_end = intervals[0][1];
        for(int i = 1; i < intervals.size(); i++){
            int start = intervals[i][0];
            int end = intervals[i][1];
            if(start >= prev_end){
                prev_end = end;
            }
            else{// number of overlapping intervals to remove
                result ++;
                prev_end = min(prev_end, end);
            }
        }
        return result;
    }
};
