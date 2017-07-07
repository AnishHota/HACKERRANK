#[NOTE]: These are only functions and willn't work as a stand alone programs
def height(root):
    if root:
        lheight = height(root.left)
        rheight = height(root.right)
        if lheight>rheight:
            return lheight+1
        else:
            return rheight+1
    else:
        return -1
