input()
from collections import Counter
num = Counter(map(int,input().strip().split()))
num = sorted(num.items())
ma= num[0][1]
for x in range(len(num)-1):
    if num[x][1]>ma:
        ma=num[x][1]
    if (num[x][1]+num[x+1][1])>ma and abs(num[x][0]-num[x+1][0])==1:
        ma=(num[x][1]+num[x+1][1])
print(ma)
'''A much easier solution i found in the internet:
n=int(input())
l=[int(i) for i in input().split()]
maximum=0
for i in l:
    c=l.count(i)
    d=l.count(i-1)
    print(c)
    print(d)
    c=c+d
    if c > maximum:
        maximum=c
print(maximum)'''
