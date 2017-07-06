#[NOTE]: These are only functions of the whole program,so wouldn't work in your local machine.
def Insert(head, data):
    if head:
        temp = head
        temp2 = Node(data)
        temp2.next = head
        head = temp2
        return head
    else:
        temp = Node(data)
        temp.next = None
        head =temp
        return head
