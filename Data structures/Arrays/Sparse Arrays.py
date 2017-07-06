n = int(input())
n_lis = []
for i in range(n):
    n_lis.append(input())
q = int(input())
for i in range(q):
    x = input()
    print(len([1 for j in n_lis if x==j]))
