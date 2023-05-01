// link: https://leetcode.com/problems/two-sum-iv-input-is-a-bst/

class Solution {
public:
    void bst_fill(TreeNode* root, vector<int> &vals) {
        if(!root) return;
        vals.push_back(root->val);
        if(root->left != nullptr) bst_fill(root->left, vals);
        if(root->right != nullptr) bst_fill(root->right, vals);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> vals;
        bst_fill(root, vals);
        int n = vals.size();
        sort(vals.begin(), vals.end());
        int left = 0, right = n-1;
        while(left<right) {
            if(vals[left] + vals[right] == k) return true;
            if(vals[left] + vals[right] > k) right--;
            else left++;
        }
        return false;  
    }
};