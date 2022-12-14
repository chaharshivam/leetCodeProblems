class Solution:
    def rob(self, nums: List[int]) -> int:
        """
        Input:  [  2,1,1,2]
        DP Arr: [0,2,2,3,4]
        """
        if len(nums) <= 2:
            return max(nums)

        opt = [0] * (len(nums)+1)
        opt[1] = nums[0]
        for n in range(1,len(nums)):
            # Max of previous optimal (skip this house) or 2 houses back and rob this house
            opt[n+1] = max(opt[n], nums[n] + opt[n-1])

        return opt[-1]