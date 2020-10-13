class Solution {
public:
    vector<TreeNode*> generateTrees(int n) {
        if(n==0)
            return {};
        return generate(1,n);
    }
    
    vector<TreeNode*> generate(int start,int end)
    {
        vector<TreeNode*> result;
        if(start>end)
            return {nullptr};
        if(start==end)
            return {new TreeNode(start)};
        for(int i=start;i<=end;i++)
        {
            vector<TreeNode*> left=generate(start,i-1);
            vector<TreeNode*> right= generate(i+1,end);
            
            
            for(auto leftnode:left)
            {    for(auto rightnode:right)
                {
                    TreeNode* root=new TreeNode(i);
                    root->left=leftnode;
                    root->right=rightnode;
                    result.push_back(root);
                }
            }
            
        }
        return result;
    }
};
