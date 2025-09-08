class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = *max_element(piles.begin(), piles.end()), result = r;
        while(l <= r ){
            int k = (l+r)/2;
            double hours = 0;
            for(int p : piles){
                hours += ceil(static_cast<double>(p)/k);
            }
            if (hours <= h){
                result = min(result, k); // k is suffcient but check for smaller value
                r = k - 1;
            }
            else{
                l = k + 1;
            }
        }
        return result;
    }
};
