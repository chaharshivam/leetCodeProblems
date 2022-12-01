class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        s = s.lower()
        n = len(s)//2
        first_half = s[:n]
        second_half = s[n:]
        print(first_half)
        print(second_half)
        all_vowels = ['a','e','i','o','u']
        first_count = 0
        second_count = 0
        for ch in first_half:
            if ch in all_vowels:
                first_count += 1
        for ch2 in second_half:
            if ch2 in all_vowels:
                second_count += 1
        print(first_count)
        print(second_count)
        return first_count == second_count
        