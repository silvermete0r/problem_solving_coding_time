 // link: https://leetcode.com/problems/symmetric-tree/

class Solution {
public:
    bool isEqual(TreeNode*r1,TreeNode*r2){        
        if(!r1||!r2)
            return r1==r2;
        if(r1->val==r2->val){
            return isEqual(r1->left,r2->right)&&isEqual(r1->right,r2->left);
        }
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        return isEqual(root->left,root->right);
    }
};