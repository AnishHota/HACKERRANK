n = int(input())
nset = set(map(int,input().strip().split()))
m = int(input())
mset = set(map(int,input().strip().split()))
sol = mset.symmetric_difference(nset)
print(*sorted(sol),sep='\n') #can't use .sort() in sets, can be used in list
# * before sorted treats each element of the set differently
