class Codec {
public:

    string serialize(TreeNode* root) {
        string ans = "";
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* curr = q.front();
            q.pop();
            if(curr!=NULL)
             ans.append(to_string(curr->val)+',');
            else
             ans.append("#,");
            if(curr!=NULL)
            {
                q.push(curr->left);
                q.push(curr->right);
            }
        }
        return ans;
    }

    
    TreeNode* deserialize(string data) {
        if(data.size()==0)
         return NULL;
        stringstream ss(data);
        string sq;
        getline(ss,sq,',');
        if(sq=="#")return NULL;
        TreeNode* root = new TreeNode(stoi(sq));
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* curr = q.front();
            q.pop();
            getline(ss,sq,',');
            if(sq!="#")
            {
                curr->left = new TreeNode(stoi(sq));
                q.push(curr->left);
            }
            getline(ss,sq,',');
            if(sq!="#")
            {
                curr->right = new TreeNode(stoi(sq));
                q.push(curr->right);
            }

        }
        return root;

    }
};
