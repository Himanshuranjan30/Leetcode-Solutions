class Solution {
public:
    
    bool findTarget(TreeNode* root, int k) {
        
         vector<int> a;
        stack<TreeNode*> stk;
        stk.push(root);
        while(!stk.empty())
        {
            int size=stk.size();
            for(int i=0;i<size;i++)
            {
                TreeNode* temp=stk.top();
                stk.pop();
                a.push_back(temp->val);
                if(temp->left)
                    stk.push(temp->left);
                if(temp->right)
                    stk.push(temp->right);
            }
        }
        for(int i=0;i<a.size()-1;i++)
        {
            for(int j=i+1;j<a.size();j++)
            {
                if(a[i]+a[j]==k)
                    return true;
            }
        }
        return false;
    }
};
