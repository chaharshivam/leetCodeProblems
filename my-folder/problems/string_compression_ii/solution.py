class Solution:
    def getLengthOfOptimalCompression(self, s: str, k: int) -> int:
        @cache
        def dfs(cur, k, last, same):
            if k < 0: return 101
            elif len(s) - cur == k: return 0
            if s[cur] == last:
                carry = 1 if same in [1, 9, 99] else 0
                return carry + dfs(cur+1, k, last, same+1)
            remain = 1 + dfs(cur+1, k, s[cur], 1)
            deleted = dfs(cur+1, k-1, last, same)
            return min(remain, deleted)
        return dfs(0, k, None, 0)