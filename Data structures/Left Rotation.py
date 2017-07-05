n,k = map(int,input().strip().split())
num = list(map(int,input().split()))
result=''
for nu in range(k,n):
    result+=str(num[nu])+' '
for nu in range(k):
    result+=str(num[nu])+' '
print(result)
