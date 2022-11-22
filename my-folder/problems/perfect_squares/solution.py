class Solution(object):
    def numSquares(self, n):
        # checks if n is a perfect square:
        if int(sqrt(n))**2 == n: return 1

        # checks if (n - j*j) for any j till sqrt(n) gives a perfect square as result
        for j in range(int(sqrt(n)) + 1):
            if int(sqrt(n - j*j))**2 == n - j*j: return 2
        
        # Special Condition of Lagrange Square method --> 4 when n in the form of (4**a)*(8*b+7)
        while n % 4 == 0: 
            n >>= 2
        if n % 8 == 7: return 4

        # Finally only 3 will be returned if all above is false as only possible ans are 1,2,3 and 4
        return 3