#include <iostream>
#include <vector>
#include <deque>
using namespace std;
// w - last accepted tasks
//k - max time allowed
// accepted_task = accepted task + current task <= k
// window_sum - to add sum
/*
0 + 4 = 4 < k
4 + 3 = 7 < 10
7 + 5 = 12 != 10 - skip
*/


std::vector<int> executeTasks(const std::vector<int>& tasks, int w, int k){
    std::vector<int> result;// final accpeted tasks
    std::deque<int> accepted_task; // last accepted durations <= w
    int window_sum = 0; // sum of durations in that window
    for (int t: tasks){
        if(window_sum + t <= k){ // if we can accept the task or not
            result.push_back(t);
            accepted_task.push_back(t);
            window_sum += t;
            // not exceed w - at most recent tasks to track at once
            if(accepted_task.size() > w){
                window_sum -= accepted_task.front();
                accepted_task.pop_front();
            }
        }
        // else: >k skip automatically
    }
    return result;
}

int main(){
    std::vector<int> tasks = {4, 3, 5, 2, 1, 6};
    std::vector<int> res = executeTasks(tasks, 3, 10);
    std::cout<<"res: " <<"\n";
    for(int i = 0; i <res.size() ; i++){
        std::cout<< res[i] <<"\n";
    }
}



