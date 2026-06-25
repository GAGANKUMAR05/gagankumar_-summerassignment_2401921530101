class Solution {
public:
    int calculate(TreeNode* root,int& diameter)
    {
        if(root==NULL)
         return 0;
        int lh = calculate(root->left,diameter);
        int rh = calculate(root->right,diameter);
        diameter = max(diameter,lh+rh);
        return 1+ max(lh,rh);

    }
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        calculate(root,diameter);
        return diameter;
    }
};