n = int(input())
st = str(n)
length = 4*n-1
width = 2*n-1
for i in range(width):
    for j in range(int((length-2*i)/2)):
        print('-',end='')
    for k in range(j,length):
        print('x',end='')
    print()
