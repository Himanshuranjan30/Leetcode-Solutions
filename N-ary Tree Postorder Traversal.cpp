class Solution {
public:
    void preord(Node* root,vector<int>&ans)
    {
        for(int i=0;i<root->children.size();i++)
            preord(root->children[i],ans);
        ans.push_back(root->val);
    }
    vector<int> postorder(Node* root) {
        vector<int>ans;
        if(root==NULL)
            return ans;
        preord(root,ans);
        return ans;
    }
};
