class Solution {
public:
    
    void pre(Node* node,vector<int> &ans)
    {
        ans.push_back(node->val);
        for(int i=0;i<node->children.size();i++)
        {
            
            pre(node->children[i],ans);
        }
    }
    
    vector<int> preorder(Node* root) {
       vector<int> ans;
        if(root==NULL)
           return ans;
        pre(root,ans);
        return ans;
        
    }
};
