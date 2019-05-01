inp =  list(map(int,input().split()))
n = inp[0]
k = inp[1]
a = list(map(int,input().split()))
pair=0
for num in range(len(a)-1):
    for nu in range(num+1,len(a)):
        if (a[num]+a[nu])%k==0:
            pair+=1
print(pair)
