class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        // create postion & speed pair
        vector<pair<int, int>> car_pair;
        for (int i = 0; i < position.size(); i++) {
            car_pair.push_back({position[i], speed[i]});
        }

        // sort based on nearest to target first - decending in position
        sort(car_pair.rbegin(), car_pair.rend());
        vector<double> stack; // store time which is decimal

        for (auto& p : car_pair) {
            // add time for each
            stack.push_back((double) (target - p.first) / p.second);

            // create car fleet
            // if top of stack's time < previous then top car catches and becomes fleet
            if (stack.size() >= 2 && stack.back() <= stack[stack.size() - 2]) {
                stack.pop_back(); // remove time less than previous
            }
        }
        return stack.size();
    }
};
