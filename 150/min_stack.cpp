class MinStack {
public:
    std::stack<int> stack;
    std::stack<int> min_stack;
    MinStack() {
        
    }
    
    void push(int val) {
        stack.push(val);
        // update min_stack
        int min_val = min(val, min_stack.empty() ? val: min_stack.top());
        min_stack.push(min_val);
    }
    
    void pop() {
        stack.pop();
        min_stack.pop();
    }
    
    int top() {
        return stack.top();
    }
    
    int getMin() {
        return min_stack.top();
    }
};
