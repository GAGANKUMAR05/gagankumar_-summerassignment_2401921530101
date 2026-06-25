class Solution {
public:
    int calculate(TreeNode* root,int &ans)
    {
        if(root==NULL)
        {
         return 0;
        }
        int maxl =max(0,calculate(root->left,ans));
        int maxr =max(0,calculate(root->right,ans));
        ans = max(ans,maxl+maxr+root->val);
        return (root->val + max(maxl,maxr));
    }
    int maxPathSum(TreeNode* root) {
        int ans =INT_MIN;
        calculate(root,ans);
        return ans;
    }
};