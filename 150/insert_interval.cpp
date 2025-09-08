class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        // 1. overlapping - merge (min(start[i], start[i] & max(start[i], start[i+1]))
        // 2. Otherwise, add new interval
        vector<vector<int>> result;
        for(int i = 0; i < intervals.size(); i++){
            // check if new interval goes to the left of current interval
            if(newInterval[1] < intervals[i][0]){
                result.push_back(newInterval);
                result.insert(result.end(), intervals.begin() + i , intervals.end());
                return result;
            }
            // check if new interval goes to right of current interval at 0
            else if(newInterval[0] > intervals[i][1]){
                result.push_back(intervals[i]);
            }
            // if overlapping
            else{
                newInterval[0] = min(newInterval[0], intervals[i][0]);
                newInterval[1] =  max(newInterval[1], intervals[i][1]);
            }
            }
            result.push_back(newInterval);
            return result;
        }
};
