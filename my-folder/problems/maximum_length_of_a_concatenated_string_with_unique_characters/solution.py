class Solution:
 def maxLength(self, arr: List[str]) -> int:
    def checkif(s):
        dic = {}
        for i in range(len(s)):
            if s[i] not in dic:
                dic[s[i]] = 1
            else:
                return False
				
        return True
		
		
    def solve(arr, s, idx):
        if idx == len(arr):
            if checkif(s):
                return len(s)
            return 0    
        
        return max(solve(arr, s + arr[idx], idx + 1), solve(arr, s, idx + 1))
        
		
    return solve(arr, "", 0)