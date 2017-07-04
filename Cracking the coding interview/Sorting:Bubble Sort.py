n=int(input())
num = list(map(int,input().split()))
noSwaps=0
for i in range(n):
    for j in range(n-1):
        if num[j]>num[j+1]:
            temp=num[j]
            num[j]=num[j+1]
            num[j+1]=temp
            noSwaps+=1
print('Array is sorted in {0} swaps.'.format(noSwaps))
print('First Element: {0}'.format(num[0]))
print('Last Element: {0}'.format(num[n-1]))
