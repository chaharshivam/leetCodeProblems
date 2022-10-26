class Solution:
    def checkSubarraySum(self, nums: List[int], k: int) -> bool:
        dc=defaultdict(lambda:[])
        st=0
        dc[0]=[-1]
        for i in range(len(nums)):
            st=(st+nums[i])%k
            if(dc[st]!=[] and dc[st][0]<i-1):
                return True
            dc[st].append(i)
        return False