TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
            if(!root) return NULL;
            if(root->left == NULL && root->right == NULL) return root;
            if(p->val < root->val && q->val > root->val) return root;
            else if(p->val < root->val && q->val < root->val) return lowestCommonAncestor(root->left,p,q);
            else if(p->val > root->val && q->val > root->val) return lowestCommonAncestor(root->right,p,q);
        return root;
    }
