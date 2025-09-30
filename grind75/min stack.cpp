class MinStack {
public:
    std::stack<int> stack;
    std::stack<int> min_stack;
    MinStack() {
    }
    
    void push(int val) {
        stack.push(val);
        if (!min_stack.empty()) val = min(val, min_stack.top());
        min_stack.push(val);
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

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */