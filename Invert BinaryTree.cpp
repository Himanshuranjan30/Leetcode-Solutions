class Solution {
public:
    TreeNode* invertTree(TreeNode* root) 
    {
       if(root==NULL)
       {
           return NULL;
       }
        queue<TreeNode*> ptr;
        ptr.push(root);
        TreeNode* temp,*swap;
        while(!ptr.empty())
        {
            temp=ptr.front();
            ptr.pop();
            swap=temp->right;
            temp->right=temp->left;
            temp->left=swap;
            if(temp->left!=NULL)
            {
                ptr.push(temp->left);
            }
            if(temp->right!=NULL)
            {
                ptr.push(temp->right);
            }
        }
        return root;
    }
};
