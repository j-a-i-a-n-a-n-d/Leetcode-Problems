class Solution {
public:
    bool same(TreeNode* p,TreeNode* q){
        if(!p && !q)
            return true;
        else if(p&&!q || !p&&q)
            return false;
        else if(p->val!=q->val)
            return false;
        else{
            return( same(p->left,q->left) && same(p->right,q->right));
        }
    }
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        return same(p,q);
    }
};