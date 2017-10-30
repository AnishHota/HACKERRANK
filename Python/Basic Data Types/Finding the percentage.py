t=int(raw_input())
dic=dict()
while t!= 0:
    a=raw_input()
    a=a.split()
    dic[a[0]]=a[1],a[2],a[3]
    t=t-1

name=raw_input()
som=0
for i in dic[name]:
    i=float(i)
    som=som+i
answer=som/3
answer=format(answer,'.2f')
print answer

    
