n=int(raw_input())
l=[]
for i in xrange(n):
    co=raw_input()
    co=co.split()
    if co[0]=='insert':
        co[1]=int(co[1])
        co[2]=int(co[2])
        l.insert(co[1],co[2])
    elif co[0]=='print':
        print l
    elif co[0]=='remove':
        co[1]=int(co[1])
        l.remove(co[1])
    elif co[0]=='append':
        co[1]=int(co[1])
        l.append(co[1])
    elif co[0]=='sort':
        l.sort()
    elif co[0]=='pop':
        l.pop()
    elif co[0]=='reverse':
        l.reverse()
        
