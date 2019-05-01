input()
cloud = list(map(int,input().split()))
i=0
count=0
while (i+2)<(len(cloud)-1):
    if cloud[i+2]==0:
        i+=2
    else:
        i+=1
    count+=1
print(count+1)
