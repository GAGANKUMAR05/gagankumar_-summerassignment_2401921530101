class Solution {
public:
    
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)
         return ans;
        queue<TreeNode*>q;
        q.push(root);
        bool flag =true;
        while(!q.empty())
        {
            int size = q.size();
            vector<int>temp;
            for(int i=1;i<=size;i++)
            {
                TreeNode* node = q.front();
                q.pop();
                if(node->left)
                q.push(node->left);
                if(node->right)
                q.push(node->right);
                temp.push_back(node->val);
            }
            if(flag)
            {
                ans.push_back(temp);
                flag = false;
            }
            else
            {
                reverse(temp.begin(),temp.end());
                flag = true;
                ans.push_back(temp);
            }
            
        }
        return ans;
    }
};