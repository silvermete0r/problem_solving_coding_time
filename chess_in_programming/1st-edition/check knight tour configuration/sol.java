public class Solution {

    public boolean checkValidGrid(List<List<Integer>> grid) {
        int n = grid.size();
        int cnt = 0;
        int row = 0;
        int col = 0;
        boolean flag = false;
        dfs_next_move(grid, n, row, col, cnt, flag);
        return flag;
    }

    private void dfs_next_move(List<List<Integer>> grid, int n, int row, int col, int cnt, boolean flag) {
        if (row < 0 || col < 0 || row >= n || col >= n || grid.get(row).get(col) != cnt) {
            return;
        }
        if (cnt == n * n - 1) {
            flag = true;
            return;
        }
        dfs_next_move(grid, n, row + 2, col + 1, cnt + 1, flag);
        dfs_next_move(grid, n, row + 2, col - 1, cnt + 1, flag);
        dfs_next_move(grid, n, row + 1, col + 2, cnt + 1, flag);
        dfs_next_move(grid, n, row - 1, col + 2, cnt + 1, flag);
        dfs_next_move(grid, n, row + 1, col - 2, cnt + 1, flag);
        dfs_next_move(grid, n, row - 1, col - 2, cnt + 1, flag);
        dfs_next_move(grid, n, row - 2, col + 1, cnt + 1, flag);
        dfs_next_move(grid, n, row - 2, col - 1, cnt + 1, flag);
    }
}
