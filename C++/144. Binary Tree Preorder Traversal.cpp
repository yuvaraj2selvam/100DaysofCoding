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
void per(TreeNode* root,vector<int>&v)
{
    if(root==NULL)return ;
    v.push_back(root->val);
    if(root->left)per(root->left,v);
    if(root->right)per(root->right,v);
}

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>v;
        per(root,v);
     return v;   
    }
};
