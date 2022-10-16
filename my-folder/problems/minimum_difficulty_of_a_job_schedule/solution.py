class Solution:
    def minDifficulty(self, jobDifficulty: List[int], d: int) -> int:
        
        INFINITY = math.inf
        
        @cache
        def dp(left, right, workingDays):
            
            jobs = (right-left+1)
            
            if workingDays > jobs:
                # There will be empty days somewhere
                return INFINITY
            
            if workingDays == jobs:
                
                # One job per day
                return sum( jobDifficulty[left: right+1] )
            
            if workingDays == 1:
                
                # Do all jobs today
                return max( jobDifficulty[left: right+1] )
            
            
            # General cases:
            # Find and compute best arrangement with minimal cost
            
            return min( dp(right-loadingToday+1, right, 1) + dp(left, right-loadingToday, workingDays-1) for loadingToday in range(1, jobs) )
            
        
        
        cost = dp(0, len(jobDifficulty)-1, d)
        
        if cost != INFINITY:
            return cost
        else:
            return -1