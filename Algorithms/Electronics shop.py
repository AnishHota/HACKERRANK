inp = list(map(int,input().split()))
s = inp[0]
n = inp[1]
m = inp[2]
mp=0
flag=0
n_price=list(map(int,input().split()))
m_price=list(map(int,input().split()))
for i in range(len(n_price)):
    for j in range(len(m_price)):
        if (n_price[i]+m_price[j])<=s and (n_price[i]+m_price[j])>mp:
            a,b=n_price[i],m_price[j]
            flag=1
            mp = n_price[i]+m_price[j]
if flag==0:
    print(-1)
else:
    print(a+b)
