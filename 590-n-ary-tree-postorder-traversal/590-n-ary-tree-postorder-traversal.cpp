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
    void postorder1(Node*root,vector<int>&sol)
    {
        if (root==NULL)
            return;
        for(Node* child : root->children)
        {
            postorder1(child,sol);
        }
        sol.push_back(root->val);
    }
    vector<int> postorder(Node* root) {
        vector<int> sol;
        postorder1(root,sol);
        return sol;    
    }
};