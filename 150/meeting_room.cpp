/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        // sort array
        // without lambda comparator sort wouldn't know how to sort objects
        sort(intervals.begin(), intervals.end(), [](auto& a, auto& b){
            return a.start < b.start;
        });
        for(int i = 1 ; i < intervals.size(); i ++){
            
            if(intervals[i-1].end > intervals[i].start){
                return false;
            } 
        }
        return true;
    }
};
