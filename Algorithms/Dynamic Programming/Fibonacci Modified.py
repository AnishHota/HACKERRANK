inp=raw_input()
li=[int(i) for i in inp.split(' ')]
a=li[0]
b=li[1]
c=li[2]
for i in xrange(c-2):
    d=b*b+a
    a=b
    b=d
print d
