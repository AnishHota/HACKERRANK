#[NOTE]: These are only functions and willn't work as a stand alone programs
def postOrder(root):
    if root:
        postOrder(root.left)
        postOrder(root.right)
        print root.data,
