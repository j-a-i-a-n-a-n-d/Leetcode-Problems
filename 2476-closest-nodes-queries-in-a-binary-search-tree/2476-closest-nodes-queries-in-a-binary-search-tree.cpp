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
    vector<int>res;
public:
    void traversal(TreeNode *root)
    {
        if(!root)return;
        traversal(root->left);
        res.push_back(root->val);
        traversal(root->right);
    }
    int minimum(vector<int>&res,int q)
    {
        int l =0;
        int r =res.size()-1;
        int ans=-1;
        while(l <= r)
        {
            int mid = l + (r-l)/2;
            if(res[mid] <= q)
            {
                ans = res[mid];
                l = mid+1;
            } 
            else 
            {
                r = mid-1;
            }
        }
        return ans;
    }
    int maximum(vector<int>&res,int q)
    {
        int l =0;
        int r =res.size()-1;
        int ans=-1;
        while(l <= r)
        {
            int mid = l + (r-l)/2;
            if(res[mid] >= q)
            {
                ans = res[mid];
                r = mid-1;
            } 
            else 
            {
                l = mid+1;
            }
        }
        return ans;
    }
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries)
    {
        vector<vector<int>>ans;
        int n=queries.size();
        traversal(root);
        for(int i=0;i<n;i++)
        {
            int q = queries[i];
            int lower = minimum(res,q);
            int upper = maximum(res,q);
            ans.push_back({lower,upper});
        }
        return ans;
    }
};