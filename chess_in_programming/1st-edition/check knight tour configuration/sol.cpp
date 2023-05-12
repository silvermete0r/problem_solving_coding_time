// link: https://leetcode.com/problems/check-knight-tour-configuration/

class Solution {
public:
    void dfs_next_move(vector<vector<int>>& grid, int n, int row, int col, int cnt, bool& flag) {
        if(row<0 || col<0 || row>=n || col>=n || grid[row][col] != cnt) return;
        if(cnt == n*n-1) {
            flag = true;
            return;
        }
        dfs_next_move(grid, n, row+2, col+1, cnt+1, flag);
        dfs_next_move(grid, n, row+2, col-1, cnt+1, flag);
        dfs_next_move(grid, n, row+1, col+2, cnt+1, flag);
        dfs_next_move(grid, n, row-1, col+2, cnt+1, flag);
        dfs_next_move(grid, n, row+1, col-2, cnt+1, flag);
        dfs_next_move(grid, n, row-1, col-2, cnt+1, flag);
        dfs_next_move(grid, n, row-2, col+1, cnt+1, flag);
        dfs_next_move(grid, n, row-2, col-1, cnt+1, flag);
    }
    bool checkValidGrid(vector<vector<int>>& grid) {
        int n = grid.size(), cnt = 0, row=0, col=0;
        bool flag = false;
        dfs_next_move(grid, n, row, col, cnt, flag);
        return flag;
    }
};
