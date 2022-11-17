class Solution:
    def computeArea(self, ax1: int, ay1: int, ax2: int, ay2: int, bx1: int, by1: int, bx2: int, by2: int) -> int:
        Sa = (ax2-ax1) * (ay2-ay1)
        Sb = (bx2-bx1) * (by2-by1)
        S = Sa + Sb
        
        w_ov = min(ax2, bx2) - max(ax1, bx1)
        if w_ov <= 0:
            return S
        
        h_ov = min(ay2, by2) - max(ay1, by1)
        if h_ov <= 0:
            return S
        
        S_ov = w_ov * h_ov
        
        return S - S_ov