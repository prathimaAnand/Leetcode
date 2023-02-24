class Solution {
public:
    int lengthOfLastWord(string s) {
      int i = s.length() - 1, length = 0;  
    //   cout<<i;
        while (s.isspace() == true):
            i -= 1;
        while (i > = 0 && s[i] != " "):
            length += 1;
            i -= 1;
    return i;
    }
};
