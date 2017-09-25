start,end = map(int,input().split())
ap,ora = map(int,input().split())
input()
appleloc = list(map(int,input().split()))
orangeloc = list(map(int,input().split()))
appleCount = 0
orangeCount = 0
for i in appleloc:
    if (ap+i)>=start and (ap+i)<=end:
        appleCount+=1
for i in orangeloc:
    if (ora+i)>=start and (ora+i)<=end:
        orangeCount+=1
print(appleCount)
print(orangeCount)
