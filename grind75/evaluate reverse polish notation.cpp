class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> stack;
        int result = 0;

        for (auto& t : tokens) {

            // if number push to stack
            if (t != "+" && t != "-" && t != "*" && t != "/") {
                stack.push(stoi(t));
                std::cout<< stack.top() << "\n";
            }

            // if operand pop top two digits and operate then add
            else {
                int num1 = stack.top();
                stack.pop();
                int num2 = stack.top();
                stack.pop();

                if (t == "+") result = num2 + num1;
                else if (t == "-") result = num2 - num1;
                else if (t == "*") result = num2 * num1;
                else if (t == "/") result = num2 / num1;
                
                stack.push(result);
            }
        }
        return stack.top();
    }
};