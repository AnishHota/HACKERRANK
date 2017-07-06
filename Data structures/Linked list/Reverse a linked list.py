#[NOTE]: These are only functions of the whole program,so wouldn't work in your local machine.
def Reverse(head):
    if head:
        p = None
        q = head
        while q:
            nex = q.next
            q.next = p
            p=q
            q=nex
        head = p
        return head
