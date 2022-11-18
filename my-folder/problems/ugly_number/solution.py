class Solution:
    def isUgly(self, m: int) -> bool:
         return False if m<=0 else (2*3*5)**32%m==0 
        