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
    int depthFunction(TreeNode* root)
    {
        if (root)
        {
            return max(1+depthFunction(root->left),1+depthFunction(root->right));
        }
        else
            return 0;
    }
    int DFS(TreeNode *root,int maxDepth,int d)
    {
        if (!root)return 0;
        else
        {
            if (d == maxDepth)
                return root->val;
            return DFS(root->left,maxDepth,d+1)+DFS(root->right,maxDepth,d+1);
        }
    }
    int deepestLeavesSum(TreeNode* root) 
    {
        int maxDepth=depthFunction(root);
        return DFS(root,maxDepth,1);
    }
};
