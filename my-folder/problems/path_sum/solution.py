class Solution:
    def hasPathSum(self, root: Optional[TreeNode], targetSum: int) -> bool:
        # Edge case: empty tree
        if not root:
            return False
        
        # DFS stack (current node, current path sum from root to current node)
        stack = [(root, root.val)]
        while stack:
            currNode, currSum = stack.pop()
            # If currNode is a leaf, check the path sum
            if not currNode.left and not currNode.right and currSum == targetSum:
                return True
            # Otherwise, push children onto the stack
            else:
                if currNode.left:
                    stack.append((currNode.left, currSum + currNode.left.val))
                if currNode.right:
                    stack.append((currNode.right, currSum + currNode.right.val))
                
        # Target sum not found
        return False