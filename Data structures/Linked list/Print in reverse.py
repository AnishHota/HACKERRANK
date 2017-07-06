#[NOTE]: These are only functions of the whole program,so wouldn't work in your local machine.
def ReversePrint(head):
    if head:
        lst = []
        node = head
        while node:
            lst.append(node.data)
            node = node.next
        for i in lst[::-1]:
            print(i)
