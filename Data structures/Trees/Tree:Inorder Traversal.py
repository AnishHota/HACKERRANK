#[NOTE]: These are only functions and willn't work as a stand alone programs
def inOrder(root):
    if root:
        inOrder(root.left)
        print root.data,
        inOrder(root.right)
