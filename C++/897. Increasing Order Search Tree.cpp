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

void inorder(TreeNode* &ans,TreeNode* root)
{
         if(!root)return ;
         inorder(ans,root->left);
         ans->right=new TreeNode(root->val);
         ans=ans->right;
         inorder(ans,root->right);
          
}

class Solution {
public:
    TreeNode* increasingBST(TreeNode* root) {
    
        TreeNode* ans=new TreeNode(0);
        TreeNode * temp=ans;
        
        inorder(ans,root);
        return temp->right;
    }
};
