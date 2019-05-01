input()
scores=list(set(map(int,input().strip().split())))
scores.sort(reverse=True)
n = int(input())
alice = list(map(int,input().strip().split()))
ind = len(scores)-1
for j in alice:
    while j>scores[ind] and ind>-1:
        ind-=1
    if j==scores[ind]:
        print(ind+1)
    else:
        print(ind+2)
