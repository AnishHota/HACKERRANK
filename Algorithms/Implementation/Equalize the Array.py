input()
a = list(map(int,input().split()))
print(len(a)-max(a.count(i) for i in set(a)))
