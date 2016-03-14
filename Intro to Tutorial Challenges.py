v=int(raw_input())
n=int(raw_input())
ar=raw_input()
ar=ar.split()
for i in xrange(n):
    ar[i]=int(ar[i])
    if(v==ar[i]):
        print i
