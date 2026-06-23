class Solution {
public:
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root)
         return ans;
         queue<TreeNode*>q;
         q.push(root);
         while(!q.empty())
         {
            vector<int>temp;
            int size= q.size();
            for(int i=1;i<=size;i++)
            {
                TreeNode* node = q.front();
                if(node->left)
                q.push(node->left);
                if(node->right)
                q.push(node->right);
                temp.push_back(node->val);
                q.pop();
            }
            ans.push_back(temp);
         }
         return ans;
    }
};