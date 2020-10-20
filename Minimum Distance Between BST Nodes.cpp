class Solution {
public:
    vector<int> a;
    void inorder(TreeNode* root)
    {
        if(root==NULL)
            return ;
        inorder(root->left);
        a.push_back(root->val);
        inorder(root->right);
    }
    
    int minDiffInBST(TreeNode* root) {
        inorder(root);
        int min=INT_MAX;
        for(int i=1;i<a.size();i++)
        {
            int diff=a[i]-a[i-1];
            if(diff<min)
                min=diff;
        }
        return min;
    }
};
