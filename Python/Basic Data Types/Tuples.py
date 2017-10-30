n=int(raw_input())
a=raw_input()
t=tuple(int(i) for i in a.split())
print hash(t)
