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
    void levelordertraversal(TreeNode *root,vector<vector<int>>&sol)
    {
        if (!root)return;
        queue<TreeNode*>q;
        q.push(root);
        while (!q.empty())
        {    
            int n=q.size();
            vector<int>temp;
            
            for(int i=0;i<n;i++)
            {
                TreeNode* node = q.front();
                if (node->left)q.push(node->left);
                if (node->right)q.push(node->right);
                temp.push_back(node->val);
                q.pop();
            }
            sol.push_back(temp);
        }
        
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root)
    {
         if (!root)return {};
        vector<vector<int>> sol;
        levelordertraversal(root,sol);
        reverse(sol.begin(),sol.end());
        return sol;
    }
};
//approach 2;
//dont reverse vector;
//find the height of the b tree;
//insert in the vector after initialising level vectors to be empty;
//vector<vector<int>> sol (vetcor<int>,({}));
//then insert at the sol[d-1].push_back() ;
//use queue;

