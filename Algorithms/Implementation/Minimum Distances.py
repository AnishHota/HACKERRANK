import sys
input()
minDist = sys.maxsize
num = list(map(int,input().split()))
for i in range(len(num)):
    if num[i] in num[i+1:]:
        b=num[i+1:].index(num[i])
        b+=i+1
        if ((b-i)<minDist):
            minDist = b-i
if minDist == sys.maxsize:
    print(-1)
else:
    print(minDist)
