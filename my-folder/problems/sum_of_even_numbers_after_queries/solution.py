class Solution:
    def sumEvenAfterQueries(self, nums: List[int], queries: List[List[int]]) -> List[int]:
        even_sum = sum(v for v in nums if v % 2 == 0)
        res: list[int] = []

        for val, idx in queries:
            if nums[idx] % 2 == 0:
                even_sum -= nums[idx]
            
            nums[idx] += val
            
            if nums[idx] % 2 == 0:
                even_sum += nums[idx]
            
            res.append(even_sum)
        
        return res