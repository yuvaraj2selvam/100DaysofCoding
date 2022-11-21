/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

void pre_order(Node* root,vector<int>&v)
{
        if(!root)return ;
        v.push_back(root->val);
        for(auto i:root->children)
        pre_order(i,v);
        
}

class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int>v;
        if(root==NULL)return v;
        pre_order(root,v);
        return v;
    }
};
