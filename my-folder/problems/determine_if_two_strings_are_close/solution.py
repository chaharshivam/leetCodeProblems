class Solution:
    def closeStrings(self, word1: str, word2: str) -> bool:
        return sorted(collections.Counter(word1).values()) == sorted(collections.Counter(word2).values()) and collections.Counter(word1).keys() == collections.Counter(word2).keys() 