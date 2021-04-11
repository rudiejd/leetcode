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
        if (node == nullptr) {
            return node;
        } 
        
        unordered_map<Node*, Node*> newGraph;
        newGraph[node] = new Node(node->val);
        
        queue<Node*> q;
        q.push(node);
        while (!q.empty()) {
            auto cur = q.front();
            q.pop();
            
            for (auto n : cur->neighbors) {
                if (newGraph.find(n) == newGraph.end()) {
                    newGraph[n] = new Node(n->val);
                    q.push(n); 
                }
                newGraph[cur]->neighbors.push_back(newGraph[n]);
            }
            
        }
        
        
        return newGraph[node]; 
    }
}; 
