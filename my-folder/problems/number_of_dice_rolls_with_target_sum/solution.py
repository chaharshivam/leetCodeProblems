class Solution:
    @lru_cache(maxsize=None)
    def numRollsToTarget(self, n: int, k: int, target: int) -> int:

        if target <= 0 or n*k < target :
            return 0

        if n==1:
            return int(target <= k)

        for i in range(1, k+1):
            ans = sum(self.numRollsToTarget(n-1,k,target-i)
                     for i in range(1, k+1))
        
        return ans % (10**9+7)