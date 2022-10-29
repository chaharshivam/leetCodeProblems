class Solution(object):
    def earliestFullBloom(self, plantTime, growTime):
        ma=0
        lastp=0
        combo=[[growTime[i],plantTime[i]] for i in range(len(growTime))]
        combo.sort(reverse=True)
        for i in range(0,len(plantTime)):
            lastp+=combo[i][1]
            ma=max(ma,lastp+combo[i][0])
        return ma