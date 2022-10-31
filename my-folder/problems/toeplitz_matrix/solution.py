class Solution:
    def isToeplitzMatrix(self, matrix: List[List[int]]) -> bool:
        current_row = matrix[0]
        for row in matrix[1:]:
            if current_row[:-1] == row[1:]:
                current_row = row
            else:
                return False
        return True