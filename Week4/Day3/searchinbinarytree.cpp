class Solution {
public:
    TreeNode* search(TreeNode* root,int val)
    {
        if(root==NULL)
         return NULL;
        
        if(root->val>val)
          return search(root->left,val);
        else if(root->val<val)
         return search(root->right,val);
        
         return root;
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL || root->val==val)
         return root;
        return search(root,val);
    }
};