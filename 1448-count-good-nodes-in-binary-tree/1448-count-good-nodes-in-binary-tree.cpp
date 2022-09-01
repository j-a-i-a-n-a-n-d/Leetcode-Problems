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
    Solution(){}int ans=0;
    void GoodNodes(TreeNode *root,int max)
    {
        if (!root) return;
        else
        {
            if (root->val>=max){ans++;max=root->val;}
            GoodNodes(root->left,max);
            GoodNodes(root->right,max);
            
        }
    }
    int goodNodes(TreeNode* root) 
    {
        GoodNodes(root,INT_MIN);
        return ans;
    }
};