class Solution {
public:
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> inord;
        stack<TreeNode*> stk;
        TreeNode* temp=root;
        while(temp!=NULL||!stk.empty())
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
                inord.push_back(temp->val);
                temp=temp->right;
            }
        }
        TreeNode* newnode= new TreeNode(inord[0]);
        TreeNode* start=newnode;
        for(int i=1;i<inord.size();i++)
        {
            newnode->right=new TreeNode(inord[i]);
            newnode=newnode->right;
        }
        return start;
    }
};
