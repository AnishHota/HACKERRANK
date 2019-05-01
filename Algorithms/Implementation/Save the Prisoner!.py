for _ in range(int(input())):
    n,m,s = map(int,input().strip().split())
    result=(m+s-1)%n
    if result==0:
        print(n)
    else:
        print(result)
