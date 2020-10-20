class Solution {
public:
  bool isSameTree(TreeNode* p, TreeNode* q) {
       bool same=false;
        if(p==NULL&&q==NULL)
           return true;
        if(p==NULL||q==NULL)
            return false;
        if(p->val==q->val)
           same=true;
        else if(p->val!=q->val)
            same=false;        
        return same&&isSameTree(p->left,q->left)&&isSameTree(p->right,q->right);
    }
};
