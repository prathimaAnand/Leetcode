class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> max_heap;
        // store all values in a max heap
        for (int i : stones){
            max_heap.push(i);
        }
        while(max_heap.size() > 1){
            int first_ele = max_heap.top();
            max_heap.pop();
            int second_ele = max_heap.top();
            max_heap.pop();
            if(first_ele > second_ele){
                max_heap.push(first_ele - second_ele);
            }
        }
        max_heap.push(0); // to avoid run time error due to empty max heap
        return max_heap.top();
    }
};