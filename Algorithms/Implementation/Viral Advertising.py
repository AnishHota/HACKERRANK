n = int(input())
a=5//2
like = 0
while n>0:
    like += a
    a = (a*3)//2
    n-=1
print(like)
