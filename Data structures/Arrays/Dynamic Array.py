n,q = map(int,input().strip().split())
s=[]
lastAnswer=0
for i in range(n):
    s.append([])
for i in range(q):
    qno,x,y = map(int,input().strip().split())
    if qno==1:
        s[(x^lastAnswer)%n].append(y)
    if qno==2:
        lastAnswer =  s[(x^lastAnswer)%n][y%len(s[(x^lastAnswer)%n])]
        print(lastAnswer)
