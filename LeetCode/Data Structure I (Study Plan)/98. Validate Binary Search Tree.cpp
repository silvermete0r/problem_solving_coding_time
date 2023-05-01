// link: https://leetcode.com/problems/validate-binary-search-tree/

class Solution {
public:
    bool isbst(TreeNode* root, long min, long max){
        if( root == NULL) return true;
        
        if(root->val > min && root->val < max){
            bool left = isbst(root->left,min,root->val);
            bool right = isbst(root->right, root->val, max);

            return left && right;
        } else {
            return false;
        }
    }

    bool isValidBST(TreeNode* root) {
        return isbst(root, LONG_MIN, LONG_MAX);
    }
};