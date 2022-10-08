class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        
        nums.sort()
        mini = float('inf')
        
        for i, j in enumerate(nums):
            
            if i > 0 and nums[i] == nums[i-1]: continue
            
            l, r = i + 1, len(nums)-1
            
            while l < r:
                
                sum_ = nums[i] + nums[l] + nums[r]
                
                if sum_ == target: return sum_
                
                if abs(mini-target) > abs(sum_-target):
                     mini = sum_
                
                if sum_ > target: r -= 1
                else: l += 1
                  
             
        return mini