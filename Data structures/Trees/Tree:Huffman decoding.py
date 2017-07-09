#[NOTE]: This is a function and willn't work as a standalone program.
def decodeHuff(root , s):
    node = root
    result=''
    for i in s:
        if i=='0':
            node = node.left
        if i=='1':
            node = node.right
        if node.data!='\0':
            result+=node.data
            node = root
    print result
