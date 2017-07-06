#[NOTE]: These are only functions of the whole program,so wouldn't work in your local machine.
def InsertNth(head, data, position):
    if head:
        count=0
        hed = head
        temp = Node(data)
        if position==0:
            temp.next = hed
            hed = temp
            return hed
        else:
            while count!=(position-1):
                hed = hed.next
                count+=1
            if hed.next != None:
                temp.next = hed.next
                hed.next = temp
            else:
                temp.next = None
                hed.next = temp
        return head
    else:
        temp = Node(data)
        temp.next = None
        head = temp
        return head
