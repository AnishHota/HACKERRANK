n,k,q = map(int,input().strip().split())
num = list(map(int,input().strip().split()))
if k%len(num)!=0:
    num=num[-k%len(num):]+num[:len(num)-(k%len(num))]
for _ in range(q):
    m = int(input())
    print(num[m])
