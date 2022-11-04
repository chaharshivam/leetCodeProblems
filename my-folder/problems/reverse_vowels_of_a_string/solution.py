import string
class Solution:
    def reverseVowels(self, s: str) -> str:
        vowels = ['a','e','i','o','u', 'A','E','I','O','U']
        vowels_list = list()
        for x in s:
            if x in vowels:
                vowels_list.append(x)
        vowels_list.reverse()
        newStr = ""
        for i in s:
            if i in vowels:
                exchange = vowels_list.pop(0)
                newStr += exchange
            else:
                newStr += i
        #print(newStr)
        return newStr
            