#[NOTE]: This is a function and willn't work as a standalone program.
def lca(root , v1 , v2):
    node = root
    while 1:
        if (v1>node.data and v2<node.data) or (v1<node.data and v2>node.data):
            return node
        elif v1==node.data or v2==node.data:
            return node
        elif v1<node.data and v2<node.data:
            node = node.left
        else:
            node = node.right
