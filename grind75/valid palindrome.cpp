// class Solution {
// public:
//     bool isPalindrome(string s) {
//         // skip or remove if its a alphanumeric 
//         // while (l < r) - check 2 pointers, l = 0, r = size - 1
//         int l = 0, size = s.size(), r = size - 1;
//         while(l < r) {
//                 // alpha numeric
//                 std::cout<< "compare " << s[l] << " and " << s[r] <<"\n";
//                 if(l < r && !is_alphanumeric(s[l])) {
//                     l += 1;
//                 }
//                 else if(l < r && !is_alphanumeric(s[r])) {
//                     r -= 1;
//                 }
//                 else {
//                     if(tolower(s[l]) == tolower(s[r])) {
//                         l += 1;
//                         r -= 1;
//                     }
//                     else {
//                         return false;
//                     }
//                 }
//         }
//         return true;
//     }
//     bool is_alphanumeric(char c) {
//         // checking is c's ASCII value lies within this range
//         return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9');
//     }
// };


class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.size() - 1;
        while(l < r) {
                while(l < r && !is_alphanumeric(s[l])) {
                    l += 1;
                }
                while(l < r && !is_alphanumeric(s[r])) {
                    r -= 1;
                }
                if(tolower(s[l]) != tolower(s[r])) {
                    return false;
                }
                l += 1;
                r -= 1;
        }
        return true;
    }
    bool is_alphanumeric(char c) {
        // checking is c's ASCII value lies within these ranges
        return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9');
    }
};