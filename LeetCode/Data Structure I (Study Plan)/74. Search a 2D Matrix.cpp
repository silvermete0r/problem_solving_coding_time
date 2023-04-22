// link: https://leetcode.com/problems/search-a-2d-matrix/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = matrix.size(), j = matrix[0].size();
        int start = 0, end = i*j-1;
        while(start<=end) {
            int mid = (start+end)/2;
            if (matrix[mid/j][mid%j] == target) return true;
            else if (matrix[mid/j][mid%j] < target) start = mid + 1;
            else end = mid - 1;
        }
        return false;
    }
};