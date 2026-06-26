class Solution {
public:
    void symmetric(TreeNode*p,TreeNode*q,bool &flag)
    {
        if(p==NULL&&q==NULL)
         return ;
         if(p==NULL&&q!=NULL)
         {
            flag = 0;
            return ;
         }
         if(p!=NULL&&q==NULL)
         {
            flag = 0;
            return ;
         }
         symmetric(p->left,q->right,flag);
         if(p&&q)
         {
            if(p->val!=q->val)
            {
                flag  = 0;
            }
         }
         symmetric(p->right,q->left,flag);
    }
    bool isSymmetric(TreeNode* root) {
       bool flag = 1;
        symmetric(root->left,root->right,flag);
        return flag;
    }
};