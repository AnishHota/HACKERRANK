a=[[j for j in input().strip().split()] for i in range(6)]
ma=0
flag=0
for i in range(len(a)-2):
    for j in range(len(a[0])-2):
        sm=0
        for k in range(j,j+3):
            sm+=int(a[i][k])+int(a[i+2][k])
        sm+=int(a[i+1][j+1])
        if sm>ma or flag==0:
            ma = sm
            flag=1
print(ma)
