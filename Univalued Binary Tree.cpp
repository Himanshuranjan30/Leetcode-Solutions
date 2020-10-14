class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        stack<TreeNode*> stk;
        stk.push(root);
        vector<int> values;
        values.push_back(root->val);
        TreeNode* temp=root;
        while(!stk.empty()||temp!=NULL)
        {
            if(temp!=NULL)
            {
                stk.push(temp);
                temp=temp->left;
            }
            else
            {
                temp=stk.top();
                
                stk.pop();
                if(temp->val!=values[0])
                    return false;
                temp=temp->right;
            }
        }
        return true;
    }
};
