// link: https://leetcode.com/problems/invert-binary-tree/

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        // stopping condition
        if (root == nullptr)
            return nullptr;

        // swapping
        TreeNode* temp = root -> left;
        root -> left = root -> right;
        root -> right = temp;

        // recursive calling
        invertTree(root -> left);
        invertTree(root -> right);

        return root;
    }
};