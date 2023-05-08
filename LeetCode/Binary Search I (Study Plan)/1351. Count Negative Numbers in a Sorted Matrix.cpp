// link: https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size(), cnt = 0;
        for(int i=0; i<n; i++) {
            int l = 0, r = m-1;
            while(l<=r) {
                int mid = l+(r-l)/2;
                if(grid[i][mid] < 0) r=mid-1;
                else l=mid+1;
            }
            cnt += m-(r+1);
        }
        return cnt;
    }
};
