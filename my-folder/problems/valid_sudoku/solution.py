class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        s=set()
        for i in range(9):
            for j in range(9):
                if board[i][j]!=".":
                    row="row"+str(i)+board[i][j]
                    col="col"+str(j)+board[i][j]
                    box="box"+str((i//3)*3+(j//3))+board[i][j]
                    if row not in s and col not in s and box not in s:
                        s.add(row)
                        s.add(col)
                        s.add(box)
                        
                    else:

                        return False
        return True
