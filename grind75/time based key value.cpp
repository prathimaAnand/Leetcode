class TimeMap {
public:

    unordered_map<string,vector<pair<string, int>>> store;
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
        // search for the key and insert at end of list - O(1)
        // if (store.find(key) != store.end())  // check if key exists
        // if (store.count(key) == 0) // if does not exist {
        //     store.insert(key);
        // }
        // in-liner check if key exists, if not creates and adds at back
        store[key].emplace_back(value, timestamp);
    }
    
    string get(string key, int timestamp) {
        // since its sorted according to time, do binary search O(logn)
        string result;
        vector<pair<string, int>>& values = store[key]; // dont create copy but modify actual vector in hash map

        // binary search
        int l = 0, r = values.size() - 1;
        while (l <= r) {
            int m = (l + r) / 2;
            if (values[m].second <= timestamp) {
                result = values[m].first; // this is nearest but continue search
                l = m + 1; // search right to get closest time
            }
            else {
                r = m - 1; // search left
            }
        }
        return result;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */