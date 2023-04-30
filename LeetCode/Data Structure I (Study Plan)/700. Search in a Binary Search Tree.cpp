// link: https://leetcode.com/problems/search-in-a-binary-search-tree/ 

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode *cur = root;
        while(cur) {
            if(cur->val == val) return cur;
            else if(cur->val > val) cur=cur->left;
            else cur=cur->right;
        }
        return NULL;
    }
};