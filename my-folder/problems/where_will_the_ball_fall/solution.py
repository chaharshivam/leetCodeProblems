class Solution:
    def findBall(self, grid: List[List[int]]) -> List[int]:
        m, n = len(grid), len(grid[0])
        res = []
        
        for idx in range(n):
            i, j = 0, idx
            while i < m:
                if grid[i][j] == 1 and j < n-1 and grid[i][j+1] == 1:
                    i, j = i+1, j+1
                elif grid[i][j] == -1 and j > 0 and grid[i][j-1] == -1:
                    i, j = i+1, j-1
                else:
                    res.append(-1)
                    break
            if i == m:
                res.append(j)
        return res