class Solution {
public:
    bool backspaceCompare(string s, string t) {
        return (clean_string(s) == clean_string(t));
    }
    string clean_string(string str) {
        std::string result1;
        for (char c : str) {
            if (c == '#'){
                if(!result1.empty()) result1.pop_back(); 
                // second # and string is empty, skip or ignore
            }
            else {
                result1.push_back(c);
            }
        }
        return result1;
    }
};