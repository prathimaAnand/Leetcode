class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // defines a custom lambda comparator that makes the priority_queue act as a min-heap based on distance from origin
        auto comp = [] (vector<int>& a, vector<int>& b){
            return a[0]*a[0] + a[1]*a[1] > b[0]*b[0] + b[1]*b[1];
        };
        // declare minheap
        // priority_queue<Type, Container, Comparator>
        priority_queue<vector<int>, vector<vector<int>>, decltype(comp)> min_heap(comp);
        for(const auto& i:points){
            min_heap.push(i); // i is a point value [x, y]
        }
        //2d vector
        vector<vector<int>> result;
        for(int j = 0; j < k; j++){
            result.push_back(min_heap.top());// push_back appending to back of the array
            min_heap.pop();
        }
        return result;

    }
};