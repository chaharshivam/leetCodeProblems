class Solution:
    def reverseWords(self, s: str) -> str:
        strList = s.split(" ")
        newStr = ""
        for word in strList:
            temp = word[::-1]
            newStr += temp + " "
        return newStr.strip()