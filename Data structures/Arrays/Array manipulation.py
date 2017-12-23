n,m = map(int,input().strip().split())
lis = [0]*n
ma=0
x=0
for _ in range(m):
    a,b,k = map(int,input().strip().split())
    lis[a-1]+=k
    if b<=(n-1):
        lis[b]-=k
for i in lis:
    x += i
    if ma<x:
        ma=x
print(ma)
