#[NOTE]: These are only functions and willn't work as a stand alone programs
def topView(root):
    top_view(root,0)
def top_view(root,count):
    if root:
        if count<=0:
            top_view(root.left,count-1)
        print root.data,
        if count>=0:
            top_view(root.right,count+1)
