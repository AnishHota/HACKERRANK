n,m = map(int,input().split())
arr = list(map(int,input().split()))
a = set(map(int,input().split()))
b = set(map(int,input().split()))
points = 0
for x in arr:
    if x in a:
        points+=1
    if x in b:
        points-=1
print(points)
