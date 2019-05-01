inp = list(map(int,input().split()))
n = inp[0]
k = inp[1]
h = list(map(int,input().split()))
if k>=max(h):
    print(0)
else:
    print(max(h)-k)
