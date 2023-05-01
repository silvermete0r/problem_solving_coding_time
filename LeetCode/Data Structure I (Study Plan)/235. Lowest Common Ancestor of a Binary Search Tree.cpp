// link: https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/

// Definiton of LCA: https://en.wikipedia.org/wiki/Lowest_common_ancestor

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==q || root==p) return root;
        if(root->val<q->val && root->val>p->val) return root;
        if(root->val<q->val && root->val<p->val) return lowestCommonAncestor(root->right,p,q);
        if(root->val>q->val && root->val>p->val) return lowestCommonAncestor(root->left,p,q);
        else return root; 
    }
};