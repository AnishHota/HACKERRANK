n=int(raw_input())
som=0
a=raw_input()
a=a.split()
for i in xrange(n):
    a[i]=int(a[i])
    som+=a[i]
print som
