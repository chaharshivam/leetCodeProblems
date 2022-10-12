class Solution:       
    def largestPerimeter(self, nums: List[int]) -> int:
        nums.sort() 
        N = len(nums)
        res = 0
        for i in range(N - 1, 1, -1): 
            if nums[i-2] + nums[i-1] > nums[i]:
                return nums[i-2] + nums[i-1] + nums[i]
            
        return 0