class Solution:
    def jobScheduling(self, startTime: List[int], endTime: List[int], profit: List[int]) -> int:
        best=0
        events=[]
        start=1
        end=0
        for s,e,p in zip(startTime,endTime,profit):
            events.append((s,start,e,p))
        heapq.heapify(events)
        while len(events)>0:
            _,t,p1,p2=heapq.heappop(events)
            if t == start:
                e,p=p1,p2
                heapq.heappush(events,(e,end,best+p,-1))
            else:
                newbest=p1
                best=max(best,newbest)
        return best