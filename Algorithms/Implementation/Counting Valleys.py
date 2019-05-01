input()
inp = input()
level=0
flag=False
valley=0
for i in inp:
    if i=='D':
        level-=1
    elif i=='U':
        level+=1
    if flag==True and level>=0:
        valley+=1
        flag=False
    if level<0:
        flag=True
print(valley)
