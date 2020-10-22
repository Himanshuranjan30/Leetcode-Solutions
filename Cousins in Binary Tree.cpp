class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        if(root==NULL)
            return true;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            bool x_find=false,y_find=false;
            int queue_size=q.size();
            while(queue_size--)
            {
                auto node=q.front();q.pop();
                if((node->left!=NULL && node->right!=NULL) && ((node->left->val==x && node->right->val==y) || (node->left->val==y && node->right->val==x)))
                    return false;
                if(node->val==x)
                    x_find=true;
                if(node->val==y)
                    y_find=true;
                if(node->left!=NULL)
                    q.push(node->left);
                if(node->right!=NULL)
                    q.push(node->right);
            }
            if(x_find==true && y_find==true)
                return true;
            if(x_find==true || y_find==true)
                return false;
        }
        return false;
    }
};
