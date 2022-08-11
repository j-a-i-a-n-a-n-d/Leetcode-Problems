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
    void preorder(TreeNode *root,vector<int>&arr)
    {
        if(!root)
            return;
        else{
            
            preorder(root->left,arr);
            arr.push_back(root->val);
            preorder(root->right,arr);
        }
    }
    bool isValidBST(TreeNode* root) 
    {
        vector<int> arr;
        preorder(root,arr);
        for(int i=0;i<arr.size()-1;i++)
        {
            if (arr[i+1]<=arr[i])
                return false;
        }
        return true;
    }
};