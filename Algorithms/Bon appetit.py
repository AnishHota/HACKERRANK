inp = list(map(int,input().split()))
k = inp[1]
price = list(map(int,input().split()))
charged = int(input())
price.pop(k)
sum_charge = sum(price)
if (sum_charge//2) == charged:
    print('Bon Appetit')
else:
    print(charged-(sum_charge//2))
