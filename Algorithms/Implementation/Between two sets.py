input()
a = list(map(int,input().split()))
b = list(map(int,input().split()))
count=0
for i in range(max(a),min(b)+1):
    between =  True
    for x in a:
        if i%x!=0:
            between = False
    for x in b:
        if x%i!=0:
            between = False
    if between==True:
        count+=1
print(count)
