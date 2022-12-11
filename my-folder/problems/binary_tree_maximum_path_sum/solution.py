class Solution:
    def maxPathSum(self, root: Optional[TreeNode]) -> int:
        res = root.val
        
        def dfs(root):
            nonlocal res
            if not root: return 0
            
            left, right = dfs(root.left), dfs(root.right)
            leftMax, rightMax = max(left, 0), max(right,0)
            
            # Compute the max sum WITH split
            res = max(res, root.val + leftMax + rightMax)
            
            # Return the max sum WITHOUT split
            return root.val + max(leftMax, rightMax)
        
        dfs(root)
        return res