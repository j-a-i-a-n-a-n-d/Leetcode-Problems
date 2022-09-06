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
    void reversePreorderTraversal(TreeNode *root,vector<int>&sol,int level)
    {
        if (root)
        {
            if (level==sol.size())
                sol.push_back(root->val);
            reversePreorderTraversal(root->right,sol,level+1);
            reversePreorderTraversal(root->left,sol,level+1);
        }
        return;
    }
    vector<int> rightSideView(TreeNode* root)
    {
        vector<int>sol;
        reversePreorderTraversal(root,sol,0);
        return sol;
    }
};