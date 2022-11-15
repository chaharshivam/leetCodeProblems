# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def countNodes(self, root: Optional[TreeNode], count = 0) -> int:
        if root:
            count += 1
            count = self.countNodes(root.left,count)
            count = self.countNodes(root.right,count)
        return count
        