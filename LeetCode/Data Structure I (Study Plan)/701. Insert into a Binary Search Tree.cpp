// link: https://leetcode.com/problems/insert-into-a-binary-search-tree/

class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root) return new TreeNode(val);
        TreeNode* cur = root;
        while(true) {
            if(cur->val > val) {
                if(cur->left!=nullptr) cur = cur->left;
                else {
                    cur->left = new TreeNode(val);
                    break;
                }
            } else {
                if(cur->right!=nullptr) cur = cur->right;
                else {
                    cur->right = new TreeNode(val);
                    break;
                }
            }
        }
        return root;
    }
};