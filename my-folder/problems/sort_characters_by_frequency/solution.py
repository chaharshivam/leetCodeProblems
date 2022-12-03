class Solution:
    def frequencySort(self, s: str) -> str:
        c = Counter(s)
        return "".join(sorted(sorted(s, key = sorted), key = lambda x : c[x], reverse = True))
        