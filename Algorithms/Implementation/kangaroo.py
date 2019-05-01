x1,v1,x2,v2 = map(int,input().split())
if v2>=v1:
    print('NO')
elif (x2-x1)%(v1-v2)==0:
    print('YES')
else:
    print('NO')
