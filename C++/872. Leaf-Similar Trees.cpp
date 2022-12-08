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

void ans1(TreeNode *root, string &a1)
{  if(!root)return ;
   if(root->left==NULL && root->right==NULL) 
   {a1+=root->val;return;}   
   ans1(root->left,a1);
   ans1(root->right,a1);
}

void ans2(TreeNode *root,string &a2)
{  if(!root)return ;
   if(root->left==NULL && root->right==NULL) 
   {a2+=root->val;return;}   
   ans2(root->left,a2);
   ans2(root->right,a2);
}

class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        string a2="",a1="";
        ans1(root1,a1);
        ans2(root2,a2);
        cout<<a1<<" "<<a2;
     if(a1==a2)return 1;
        return 0;
    }
};
