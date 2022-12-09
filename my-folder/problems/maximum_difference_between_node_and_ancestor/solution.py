class Solution:
    def maxAncestorDiff(self, root: Optional[TreeNode]) -> int:
        m, l = 0, [[root, root.val, root.val]] # min val, max val
        while l:
            node, min_val, max_val = l.pop()
            if node.right: 
                min_curr = min(min_val, node.right.val)
                max_curr = max(max_val, node.right.val)
                m = max(m, max_curr-min_curr)
                l.append([node.right, min_curr, max_curr])
            if node.left:
                min_curr = min(min_val, node.left.val)
                max_curr = max(max_val, node.left.val)
                m = max(m, max_curr-min_curr)
                l.append([node.left, min_curr, max_curr])
        return m