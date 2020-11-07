class Solution {
public:
    bool isIdentical(TreeNode* s, TreeNode* t)
    {
        if(s==NULL && t==NULL) return true;
        if((s!=NULL && t==NULL)  || (s==NULL && t!=NULL) )
            return false;
        if( s->val==t->val && (isIdentical(s->left,t->left) 
                             && isIdentical(s->right,t->right)))
           return true;
         return false;
    }
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if((s!=NULL && t==NULL)  || (s==NULL && t!=NULL) )
            return false;
        bool x;
        if(s->val == t->val) 
            x=isIdentical(s,t);
        bool l=isSubtree(s->left,t);
        bool r=isSubtree(s->right,t);
        return l||r||x;
    }
};
