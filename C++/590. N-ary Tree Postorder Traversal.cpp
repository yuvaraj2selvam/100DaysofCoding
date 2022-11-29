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

void post_order(Node*root,vector<int>&v)
{
    if(!root)return ;
    
    for(auto i:root->children)
        post_order(i,v);
    v.push_back(root->val);
}

class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int>v;
        if(!root)return v;
        post_order(root,v);
        return v;
    }
};
