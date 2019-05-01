from collections import Counter
input()
socks = Counter(map(int,input().split()))
pair=0
for sock in socks:
    pair+= socks[sock]//2
print(pair)
