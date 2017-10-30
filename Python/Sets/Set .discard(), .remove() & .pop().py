input()
s = set(map(int,input().split()))
n = int(input())
for _ in range(n):
    inp = input()
    if inp[0]=='p':
        s.pop()
    if inp[0]=='r':
        comm,val = inp.split()
        s.remove(int(val))
    if inp[0]=='d':
        comm,val = inp.split()
        s.discard(int(val))
print(sum(s))
