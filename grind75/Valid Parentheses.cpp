class Solution {
public:
    bool isValid(string s) {
    unordered_map<char, char> map = { {')', '('}, {']', '['}, {'}', '{'} };
    stack<char> stack;
    for (int c : s) {
        if (map.count(c)) { // check if c is closing bracket - returns true if close exists as a key
            if (stack.top() == map[c]) { // check if top of stack is open bracket
                stack.pop();
            }
            else {
                return false;
            }
        }
        else { // then its a opening bracket so push to stack
            stack.push(c);
        }
    }
    return stack.empty(); // returns true only is stack has no elements
    }
};