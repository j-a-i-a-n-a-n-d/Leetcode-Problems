/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void preorder1(Node *root,vector<int>&sol)
    {
        if (root == NULL) {
            return;
        }
        
        sol.push_back(root -> val);
        for (Node* child : root -> children) {
            preorder1(child, sol);
        }
    }
    vector<int> preorder(Node* root)
    {
        vector<int> sol;
        preorder1(root,sol);
        return sol;
    }
    
};







