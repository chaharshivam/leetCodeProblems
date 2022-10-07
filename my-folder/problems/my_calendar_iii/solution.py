class MyCalendarThree:
    
    def __init__(self):
        self.ss = []
        self.ee = []
        self.cap = 0
    def book(self, start: int, end: int) -> int:
        ind2, ind1 = bisect.bisect_left(self.ss, end), bisect.bisect_right(self.ee, start)

        p1 = ind1
        curr = 1
        for p2 in range(ind1, ind2):
            if self.ss[p2]<self.ee[p1]:
                curr += 1
            else: p1 += 1
        self.cap = max(curr, self.cap)
        bisect.insort(self.ss, start)
        bisect.insort(self.ee, end)
        return self.cap


# Your MyCalendarThree object will be instantiated and called as such:
# obj = MyCalendarThree()
# param_1 = obj.book(start,end)