// link: https://leetcode.com/problems/binary-tree-inorder-traversal/

class Solution {
public:
    void helper(vector<int> &ans, TreeNode *root){
        if(root==NULL) return;
        helper(ans,root->left);
        ans.push_back(root->val);
        helper(ans,root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        helper(ans, root);
        return ans;
    }
};