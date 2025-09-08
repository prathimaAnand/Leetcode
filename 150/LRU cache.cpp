class Node{
public:
    int key;
    int val;
    Node* prev;
    Node* next;
    Node(int k, int v): key(k), val(v), prev(nullptr), next(nullptr) {} // initializer list
};

class LRUCache {
private:
    Node* right;
    Node* left;
    // hasp map with keys and pointer to the node
    unordered_map<int, Node*> cache;
    int cap;
    void remove(Node* node){
        // remove at LRU
        Node* prev = node->prev;
        Node* nxt = node->next;
        prev->next = nxt;
        nxt->prev = prev;
    }
    void insert(Node* node){
        Node* prev = right->prev;
        prev->next = node;
        node->prev = prev;
        node->next = right;
        right->prev = node;
    }
public:
    LRUCache(int capacity) {
        cap = capacity;
        // dummy nodes
         left = new Node(0, 0);
         right = new Node(0, 0);
         //link left and right
         left->next = right;
         right->prev = left;
    }
    
    int get(int key) {
        if(cache.find(key) != cache.end()){
            Node* node = cache[key];
            remove(node); // remove from LRU
            insert(node); //insert at MRU
            return node->val;
        }
        return -1;
    }
    
    void put(int key, int value) {
        //if key exists unlink that node
        if(cache.find(key) != cache.end()){
            remove(cache[key]); // remove from linked list
        }
        Node* newNode = new Node(key, value);
        cache[key] = newNode; //add to map
        insert(newNode); // insert at MRU
        // check for capacity limit
        if(cache.size() > cap){
            Node* lru_node = left->next; //remove node next to left dummy node
            remove(lru_node);
            // delete in map as well
            cache.erase(lru_node->key); // by refering to key
            delete lru_node; //memory management - frees that memory
        }
    }

};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */