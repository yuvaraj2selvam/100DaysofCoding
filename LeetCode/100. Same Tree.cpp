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

  void same(TreeNode*p,TreeNode*q,int &f)
  {
      if(!p && !q) return;
      else if(!p && q || !q && p) {f=0;return;}
      if(p->val!=q->val)f=0;
      same(p->left,q->left,f);
      same(p->right,q->right,f);
      
  }

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        int f=1;
        same(p,q,f);
        return f;
    }
};
