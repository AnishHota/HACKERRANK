#[NOTE]: These are only functions of the whole program,so wouldn't work in your local machine.
def Delete(head, position):
    node = head
    prev_node = head
    count=0
    if position == 0 and head:
        head = node.next
        hed = None
        return head
    while count!=(position) and node:
        prev_node = node
        node = node.next
        count+=1
    prev_node.next = node.next
    node = None
    return head
