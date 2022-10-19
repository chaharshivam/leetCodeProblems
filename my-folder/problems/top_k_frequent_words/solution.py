class Solution:
    def topKFrequent(self, W: List[str], k: int) -> List[str]:
        return list(zip(*collections.Counter(sorted(W)).most_common(k)))[0]