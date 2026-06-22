class Solution {
public:
    void same(TreeNode * p,TreeNode *q,bool &flag)
    {
        if(p==NULL&&q==NULL)
         return ;
         if(p==NULL&&q!=NULL)
        {
            flag= 0;
            return ;
        }
         if(p!=NULL&& q==NULL)
         {

         
            flag = 0;
            return ;
        }
           same(p->left,q->left,flag);
            if(p&&q)
            {
                if(p->val!=q->val)
                flag = 0;
            }
            same(p->right,q->right,flag);
        
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool flag = 1;
       same(p,q,flag);
       return flag;
    }
};