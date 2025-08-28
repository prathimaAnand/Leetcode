class Solution {
public:
    int calculate(string s) {
            int curr = 0, prev = 0, res = 0;
            char op = '+';
            for (int i = 0; i < s.size(); i++){
                //if digit
                if(isdigit(s[i])){
                    // add to the curr
                    // 2nd iteration is a digit too, then multiply with 10 and add s[i]
                    curr = curr * 10 + (s[i] - '0');
                }
                //if operator
                if( (!isdigit(s[i]) && s[i] != ' ') || i == s.size() - 1){ // edge case: last value and white space
                    if(op == '+'){
                        res += prev;
                        prev = curr;
                    }
                    else if(op == '-'){
                        res += prev;
                        prev = curr * -1;

                    }
                    else if(op =='*'){
                        prev = prev * curr;
                    }
                    else if (op == '/') {
                        prev /= curr;
}
                    curr = 0; // update curr after adding to prev
                    op = s[i];
                }
            }
            // edge case
            res += prev; // value in prev
            return res;
        }
};
/*
s = {11+6-2+3}
curr = 11
prev = 11
op = +  
*/

