#[NOTE]: These are functions and willn't work as a standalone program.
def insert(r,val):
    if r==None:
        r = Node(val)
        r.left = None
        r.right = None
    if val<r.data:
        r.left = insert(r.left,val)
    if val>r.data:
        r.right = insert(r.right,val)
    return r
