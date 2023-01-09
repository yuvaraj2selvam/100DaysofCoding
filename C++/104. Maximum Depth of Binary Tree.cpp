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

void height(TreeNode* root,int n,int &ans)
{
    if(root)n++;
    else return;
    height(root->left,n,ans);
    height(root->right,n,ans);
    ans=max(n,ans);
}
class Solution {
public:
    int maxDepth(TreeNode* root) {
        int ans=0,n=0;
        height(root,n,ans);
        return ans;
    }
};
