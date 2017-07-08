#[NOTE]: These are functions and willn't work as a standalone program.
def levelOrder(root):
    queue = []
    queue.append(root)
    while(len(queue)>0):
        node = queue.pop(0)
        print node.data,
        if node.left:
            queue.append(node.left)
        if node.right:
            queue.append(node.right)
