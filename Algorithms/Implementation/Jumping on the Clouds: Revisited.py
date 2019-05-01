n,k = map(int,input().strip().split())
cloud = list(map(int,input().strip().split()))
e=100
i=0
while(True):
    if cloud[i]==0:
        e-=1
    else:
        e-=3
    i=(i+k)%n
    if i==0:
        break
print(e)
