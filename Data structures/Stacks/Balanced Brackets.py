t = int(input())
ope = ['[','{','(']
close = [']','}',')']
for i in range(t):
    inp = input()
    stack = []
    result=0
    if len(inp)%2!=0:
        result=1
    else:
        for j in inp:
            if j in ope:
                if inp.count(j)!=inp.count(close[ope.index(j)]):
                    result=1
                stack.append(j)
            elif j in close:
                if len(stack)==0:
                    result = 1
                else:
                    elem = stack.pop()
                    if close.index(j)!=ope.index(elem):
                        result=1
    if result==0:
        print('YES')
    else:
        print('NO')
