/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
      int sum=0;
        stack<TreeNode*> stk;
        stk.push(root);
        while(!stk.empty())
        {
           int size=stk.size();
            for(int i=0;i<size;i++)
            {
                root=stk.top();
                stk.pop();
                if(root->val>=L&&root->val<=R)
                { sum=sum+root->val;
                   cout<<root->val<<endl;
                }
                if(root->left)
                    stk.push(root->left);
                if(root->right)
                    stk.push(root->right);
            }
        }
        return sum;
    }
};
