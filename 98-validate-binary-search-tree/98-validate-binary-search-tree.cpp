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
/*class Solution {
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
};*/
class Solution {
public:
    
    bool solve(TreeNode* root, long long int min,long long int max){
        if(!root)return true;
        
        if(root->val>=max || root->val<=min)return false;
        
        return solve(root->left,min,root->val) and solve(root->right,root->val,max);
    }
    
    bool isValidBST(TreeNode* root) {
        if(!root)return true;
        
        return solve(root,-1e18,1e18);
    }
};