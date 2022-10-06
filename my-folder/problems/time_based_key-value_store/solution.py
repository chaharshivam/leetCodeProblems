class TimeMap:
    def __init__(self):
	
        self.values = defaultdict(list)
        self.stamps = defaultdict(list)
    
    def set(self, key: str, value: str, timestamp: int) -> None:
	
        self.values[key].append(value)
        self.stamps[key].append(timestamp)
        return
        
    def get(self, key: str, timestamp: int) -> str:
	
        i = bisect_right(self.stamps[key],timestamp)-1
        return '' if i == -1 else self.values[key][i]