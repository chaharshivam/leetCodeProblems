# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def pseudoPalindromicPaths (self, root: Optional[TreeNode]) -> int:
        freq = defaultdict(int)
        
        def pal_count(node: Optional[TreeNode], odd_freq_count: int):
            if not node: return 0
            
            node_val = node.val
            
            # update frequency
            freq[node_val] += 1
            
            # if odd
            if freq[node_val] % 2 != 0:
                odd_freq_count += 1
            # otherwise even
            else:
                odd_freq_count -= 1
                
            # check whether leaf node
            if not node.left and not node.right:
                # backtrack
                freq[node_val] -= 1
                
                # if palindrome return 1
                if odd_freq_count <= 1:
                    return 1
                return 0
            
            # sum values from left and right subtrees
            ans = pal_count(node.left, odd_freq_count) + pal_count(node.right, odd_freq_count)
            
            # backtrack
            freq[node_val] -= 1
            
            return ans
            
            
        return pal_count(root, 0)