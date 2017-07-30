s=input()
stack = []
for i in s:
    if len(stack)==0:
        stack.append(i)
    else:
        if i==stack[len(stack)-1]:
            stack.pop(len(stack)-1)
        else:
            stack.append(i)
if len(stack)==0:
    print('Empty String')
else:
    print(''.join(stack))
