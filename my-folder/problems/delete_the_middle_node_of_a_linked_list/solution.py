class Solution:
    def deleteMiddle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        i=head
        n=0
        while(i):
            n+=1
            i=i.next
        n=n//2-1
        if(n<0):
            return None
        i=head
        while(i and 0<n):
            i=i.next
            n-=1
        i.next=i.next.next
        return head