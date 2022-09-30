class Solution:
    def nested_lists_to_list(self, _list):
        return sum(_list, [])
        
    def how_close(self, _list, x):
        closest = {}
        for num in _list:
            closest.setdefault(abs(num-x), []).append(num)
        return closest
        
    def findClosestElements(self, arr: List[int], k: int, x: int) -> List[int]:
        ans = []
        
        closest = self.how_close(arr, x)
        closest_pos = sorted(closest)
        
        for pos in closest_pos:
            ans.append(closest[pos])
            
        return sorted(self.nested_lists_to_list(ans)[:k])