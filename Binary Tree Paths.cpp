class Solution {
    
    void util(TreeNode* root, string path, vector<string>& result) {
        if(!root)
            return;
        path += to_string(root->val);
        if(!root->left && !root->right) {
            result.push_back(path);
            path.pop_back();
            return;
        }
        path += "->";
        if(root->left)
            util(root->left, path, result);
        if(root->right)
            util(root->right, path, result);
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        string path;
        vector<string> result;
        util(root, path, result);
        return result;
    }
};
