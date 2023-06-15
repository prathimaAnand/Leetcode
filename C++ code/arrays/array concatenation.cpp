class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans; // check if "list<int>" defination works or "std::vector<int>"
        for (int i =0; i <=1 ; i++){
            for(int n : nums){
                ans.push_back(n);
            }
        }
        return ans;
    }
};
