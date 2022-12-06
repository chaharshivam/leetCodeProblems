class Solution:
    def middleNode(self, head: ListNode) -> ListNode:

        if not head.next: return head  # Example: head = [1,2,3,4,5,6]

        fast = slow = head.next        # Initialize fast and slow pointers
        
        while fast.next:
            fast = fast.next           # move the fast pointer
            
            if fast.next:              # If possible, move both pointers
                fast = fast.next
                slow  = slow.next
                
        return slow