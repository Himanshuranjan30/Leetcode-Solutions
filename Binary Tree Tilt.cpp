class Solution {
public:
    int result = 0;
    int findTilt(TreeNode* root) {
        dfs(root);
        return result;
    }
    int dfs(TreeNode* root){
        if(root){
            int left = dfs(root->left);
            int right = dfs(root->right);
            result += abs(left - right);
            return root->val + left + right;
        }
        return 0;
    }
};
