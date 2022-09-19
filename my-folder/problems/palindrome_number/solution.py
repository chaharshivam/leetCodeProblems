class Solution:
    def isPalindrome(self, x: int) -> bool:
        strx = str(x)
        rstrx = strx[::-1]
        if strx == rstrx:
            return True
        else:
            return False