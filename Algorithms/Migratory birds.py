input()
types = list(map(int,input().split()))
a=[]
for i in range(1,6):
    a.append(types.count(i))
print(a.index(max(a))+1)
