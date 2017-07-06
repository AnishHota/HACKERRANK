#[NOTE]: These are only functions of the whole program,so wouldn't work in your local machine.
def Insert(head, data):
    if head is not None:
        temp = head
        while temp.next:
            temp=temp.next
        temp2 = Node(data)
        temp2.next = None
        temp.next = temp2
        return head
    else:
        temp = Node(data)
        temp.next = None
        head = temp
        return head
