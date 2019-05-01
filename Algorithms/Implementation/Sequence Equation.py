n = int(input())
p = list(map(int,input().strip().split()))
a=b=0
for x in range(1,n+1):
    a = p.index(x)+1
    b = p.index(a)+1
    print(b)
