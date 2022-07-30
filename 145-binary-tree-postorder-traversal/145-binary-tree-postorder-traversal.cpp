/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root)
    {
        vector<int> sol;
        oinorder(root,sol);
        return sol;
    }
    void oinorder(TreeNode *root,vector<int>&sol)
    {
        if(root)
        {
            oinorder(root->left,sol);
            oinorder(root->right,sol);
            sol.push_back(root->val);
        }
        else
        {
            return;
        }
    }
};