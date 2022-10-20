class Solution:
    def intToRoman(self, num: int) -> str:
        roman = 'M,CM,D,CD,C,XC,L,XL,X,IX,V,IV,I'.split(',')
        integers = [1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1]
        d=dict(zip(integers, roman ))
        
        res=''
        for n in integers:
            res += d[n]*(num//n)
            num = num % n
            
        return res