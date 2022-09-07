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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
        vector<vector<int>>sol;
        if (!root)return {};
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int n = q.size();
            vector<int> temp;
            for(int i=0;i<n;i++)
            {
                TreeNode *node=q.front();
                if (node->left)q.push(node->left);
                if (node->right)q.push(node->right);
                temp.push_back(node->val);
                q.pop();
            }
            sol.push_back(temp);
        }
        for (int i=1;i<sol.size();i+=2)
        {
            reverse(sol[i].begin(),sol[i].end());
        }
        return sol;
    }
};
//without reversal at alternate use =>count with the code and insert ulta :");