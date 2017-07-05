n=int(input())
num = list(map(int,input().split()))
num.reverse()
[print(x,end=' ') for x in num]
