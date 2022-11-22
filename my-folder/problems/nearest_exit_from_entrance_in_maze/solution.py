class Solution:
    def __init__(self):
        self.maze = None
        self.entrance = None
        self.rows, self.cols = 0, 0

    def nearestExit(self, maze: list[list[str]], entrance: list[int]):
        self.configure(maze, entrance)

        self.is_empty(*entrance, 0)
        moves, index = deque([entrance]), 0

        while moves:
            row, col = moves.popleft()
            # print(row, col)
            if self.is_exit(row, col):
                return self.maze[row][col]

            index += 1
            moves += self.get_moves_and_mark(row, col)

        return -1

    def configure(self, maze, entrance):
        self.maze = maze
        self.entrance = entrance
        self.rows = len(maze)
        assert self.rows > 0
        self.cols = len(maze[0])
        assert all([len(row_length) == self.cols for row_length in maze])
        assert all(all(cell in '.+' for cell in row) for row in maze)
        assert len(entrance) == 2
        assert self.is_empty(*entrance)

    def is_empty(self, row, col, mark=None):
        empty = 0 <= row < self.rows and 0 <= col < self.cols and self.maze[row][col] == '.'
        if empty and mark is not None:
            self.maze[row][col] = mark
        return empty

    def is_exit(self, row, col):
        return (row in {0, self.rows-1} or col in {0, self.cols-1}) and [row, col] != self.entrance

    def get_moves_and_mark(self, row, col):
        return [[row + dy, col + dx] for (dy, dx) in ((-1, 0), (1, 0), (0, -1), (0, 1)) if
                self.is_empty(row + dy, col + dx, self.maze[row][col] + 1)]