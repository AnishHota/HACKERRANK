input()
a=set(map(int,input().split()))
n=int(input())
for _ in range(n):
    ins = input()
    b = set(map(int,input().split()))
    if ins[0]=='i':
        a.intersection_update(b)
    elif ins[0]=='u':
        a.update(b)
    elif ins[0]=='s':
        a.symmetric_difference_update(b)
    elif ins[0]=='d':
        a.difference_update(b)
print(sum(a))
