input()
arr = list(map(int,input().split()))
d,m = map(int,input().split())
count=0
for i in range(len(arr)):
    if sum(arr[i:i+m])==d:
        count+=1
print(count)
