// link: https://leetcode.com/problems/binary-tree-level-order-traversal/

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if (root == NULL) return result;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while (!q.empty()) {
            int count = q.size();
            vector<int> curr;
            
            for (int i = 0; i < count; i++) {
                TreeNode* node = q.front();
                q.pop();
                
                curr.push_back(node->val);
                
                if (node->left != NULL)  q.push(node->left);
                if (node->right != NULL) q.push(node->right);
            }
            
            result.push_back(curr);
        }        
        return result;
    }
};