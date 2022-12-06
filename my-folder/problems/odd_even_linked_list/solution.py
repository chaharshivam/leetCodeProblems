class Solution:
    def oddEvenList(self, head: ListNode) -> ListNode:
        if not head:
            return head
        first = head
        odd = head
        even = head.next

        i = 1
        while head and head.next:
            if i % 2 != 0:
                odd = head
            ne = head.next
            head.next = head.next.next
            head = ne
            i += 1

        if odd.next:
            odd = odd.next

        odd.next = even
        return first