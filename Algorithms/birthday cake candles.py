n = int(input())
height = list(map(int,input().split()))
countC=0
countC += height.count(max(height))
print(countC)
