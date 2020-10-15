class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        if(root1==NULL && root2==NULL)
            return true;
        if(root1==NULL && root2==NULL)
            return false;
        
        vector<int> first;
        findLeafSequence(root1, first);
        vector<int> second;
         findLeafSequence(root2, second);
        
        if(first.size()!=second.size())
            return false;
        
        for(int i=0;i<first.size();i++){
            if(first[i]!=second[i])
                return false;
        }
        
        return true;
    }
    
   void findLeafSequence(TreeNode* root, vector<int>& output){
        if(root==NULL)
            return;
       
       if(root->left!=NULL)
           findLeafSequence(root->left,output);
       if(root->right!=NULL)
           findLeafSequence(root->right,output);
       
       if(root->left==NULL && root->right==NULL)
           output.push_back(root->val);
    }
};
