class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        // add first interval
        
        sort(intervals.begin(), intervals.end());
        result.push_back(intervals[0]);
        for(int i = 1; i < intervals.size(); i++){
            int start = intervals[i][0];
            int end = intervals[i][1];

            auto& last = result.back();

            if(start <= last[1]){
                last[1] = max(last[1], end); // merge intervals by extending end
            }
            else{
                result.push_back({start, end}); // new separate interval
            }
        }
        return result;
    }
};
