# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        dummy = reverse_head = None
        while head:
            temp=head.next
            head.next=reverse_head
            reverse_head=head
            head=temp
        return reverse_head
        