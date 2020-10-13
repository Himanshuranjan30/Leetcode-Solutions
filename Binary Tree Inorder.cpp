class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
       vector<int> result;
        stack<TreeNode*> stk;
        TreeNode* temp=root;
        while(temp!=NULL||!stk.empty())
        {
            if(temp)
            {
                stk.push(temp);
                temp=temp->left;
            }
            else{
                temp=stk.top();
                stk.pop();
                result.push_back(temp->val);
                temp=temp->right;
            }
        }
        return result;
    }
};
