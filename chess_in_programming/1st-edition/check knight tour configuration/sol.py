class Solution:

    def checkValidGrid(self, grid) -> bool:
        n = len(grid)
        cnt = 0
        row = 0
        col = 0
        flag = False
        self.dfs_next_move(grid, n, row, col, cnt, flag)
        return flag

    def dfs_next_move(self, grid, n, row, col, cnt, flag) -> None:
        if row < 0 or col < 0 or row >= n or col >= n or grid[row][col] != cnt:
            return
        if cnt == n * n - 1:
            flag = True
            return
        self.dfs_next_move(grid, n, row + 2, col + 1, cnt + 1, flag)
        self.dfs_next_move(grid, n, row + 2, col - 1, cnt + 1, flag)
        self.dfs_next_move(grid, n, row + 1, col + 2, cnt + 1, flag)
        self.dfs_next_move(grid, n, row - 1, col + 2, cnt + 1, flag)
        self.dfs_next_move(grid, n, row + 1, col - 2, cnt + 1, flag)
        self.dfs_next_move(grid, n, row - 1, col - 2, cnt + 1, flag)
        self.dfs_next_move(grid, n, row - 2, col + 1, cnt + 1, flag)
        self.dfs_next_move(grid, n, row - 2, col - 1, cnt + 1, flag)
