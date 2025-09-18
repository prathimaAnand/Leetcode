/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        map<Node*, Node*> oldToNew;
        return dfs(node, oldToNew);
    }

    Node* dfs(Node* node, map<Node*, Node*>& oldToNew) {
        if (node == nullptr) return nullptr;
        // check if node is in map, return clone
        if (oldToNew.count(node)) return oldToNew[node];
        
        // new node add to copy and map
        Node* copy = new Node(node->val);
        oldToNew[node] = copy; 

        // add their neighbors using dfs
        for (Node* n : node->neighbors) {
            // add neighbors to copy graph
            copy->neighbors.push_back(dfs(n, oldToNew));
        }

        return copy;
    }
};
