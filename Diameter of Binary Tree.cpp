class Solution {
int height(TreeNode* root) // function to find the height of the tree
{
if(root==NULL)return 0;
return(max(height(root->left),height(root->right))+1);
}
public:
int diameterOfBinaryTree(TreeNode* root) {
if(root==NULL)return 0; //base condition
int rooth=height(root->left)+height(root->right); // if one node is in the left and the second node is in the right then this will give the answer
int leftd=diameterOfBinaryTree(root->left); //if both nodes are in the left side then we do not need to go and check to root and right side
int rd=diameterOfBinaryTree(root->right); //if both nodes are in the right side then we do not need to go and check to root and leftt side
return max(rooth,max(leftd,rd)); //we always have to return the longest path or maximum nodes in the path

}
};
