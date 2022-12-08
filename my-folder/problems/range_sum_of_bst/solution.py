class Solution:
	def rangeSumBST(self, root: TreeNode, L: int, R: int) -> int:
		return self.helper(root,0,L,R)

	def helper(self,node,res,L,R):
		if not node:
			return res
		if node.val>=L and node.val<=R:
			res+=node.val
		res=self.helper(node.left,res,L,R)
		res=self.helper(node.right,res,L,R)
		return res