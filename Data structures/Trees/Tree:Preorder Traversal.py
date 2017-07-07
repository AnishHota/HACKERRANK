#[NOTE]: These are only functions and willn't work as a stand alone programs
def preOrder(root):
    if root:
        print root.data,
        preOrder(root.left)
        preOrder(root.right)
