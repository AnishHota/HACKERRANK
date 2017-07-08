#[NOTE]: These are functions and willn't work as a standalone program.
def has_cycle(head):
    lis = []
    while head:
        if head.data in lis:
            return 1
        lis.append(head.data)
        head = head.next
    return 0
