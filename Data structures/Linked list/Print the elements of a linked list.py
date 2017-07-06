#[NOTE]: These are only functions of the whole program,so wouldn't work in your local machine.
def print_list(head):
    if head:
        print(head.data)
        print_list(head.next)
