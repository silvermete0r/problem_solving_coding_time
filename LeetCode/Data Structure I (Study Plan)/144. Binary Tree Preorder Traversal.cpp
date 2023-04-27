// link: https://leetcode.com/problems/binary-tree-preorder-traversal/

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==NULL) return ans;
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()) {
            TreeNode* temp = st.top();
            ans.push_back(temp->val);
            st.pop();
            if(temp->right!=NULL) st.push(temp->right);
            if(temp->left!=NULL) st.push(temp->left);
        }
        return ans;
    }
};