input()
from collections import Counter
a = Counter(map(int,input().strip().split()))
for i in a:
    if a[i]!=2:
        print(i)
        break
