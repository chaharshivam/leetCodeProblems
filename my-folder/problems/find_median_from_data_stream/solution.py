class MedianFinder:

    def __init__(self):
        self.arr = []

    def addNum(self, num: int) -> None:
        self.arr.append(num)

    def findMedian(self) -> float:
        self.arr = sorted(self.arr)
        if len(self.arr) == 1:
            return self.arr[0]
        if len(self.arr) == 0:
            return self.arr
        if len(self.arr)%2 == 0:
            mid = len(self.arr)//2
            a = self.arr[mid]
            b = self.arr[mid-1]
            return (a+b)/2
        else:
            return self.arr[len(self.arr)//2]