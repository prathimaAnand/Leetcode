/* 
Pseudocode:
encode:
1. Initilize an empty vector for size and empty result string.
2. For each string in the vector:
    a. store its length in the size vector.
3. Apend each string to the result by converting the size to string and separated by comma
4. Append '#'
5. Concatenate all string after # sign
6. Return the final result string

decode:
1. Initialize empty vectors for size and result.
2. Loop through the input until you reach '#'
    a. Reach each number until a comma
    b. Convert into string  and then store in sizze vextor
3. After #
    a. For each size in sizes vector
        i. Extract a substring of that size
        ii. Append it to result
4. Return the result - list od strings (vector)
*/

class Solution {
public:
    string encode(vector<string>& strs) {
        if (strs.ampty()) return "";
        vectro<int> sizes;
        vector<string> res;
        int i = 0;
        while (s[i] != '#'){
            string cur = "";
            while (s[i] != ',') {
                cur += s[i];
                i++;
            }
            sizes.push_back(stoi(cur));
            i++;
        }
        i++;
        for (int sz : sizes) {
            res.push_back(s.substr(i, sz));
            i += sz;
        }
        return res;
    }
};









