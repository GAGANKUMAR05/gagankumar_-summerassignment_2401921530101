class Solution {
public:
    int find(vector<int>& inorder,int res,int left,int right)
    {
        for(int i =left;i<=right;i++)
        {
            if(inorder[i]==res)
             return i;
        }
        return -1;
    }
    TreeNode* maketree(vector<int>& preorder, vector<int>& inorder,int left,int right,int ind)
    {
        if(left>right)
         return NULL;
       TreeNode* root = new TreeNode(preorder[ind]);
       int pos = find(inorder,preorder[ind],left,right);
       root->left = maketree(preorder,inorder,left,pos-1,ind+1);
       root->right = maketree(preorder,inorder,pos+1,right,ind+pos-left+1);
       return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return maketree(preorder,inorder,0,preorder.size()-1,0);
    }
};