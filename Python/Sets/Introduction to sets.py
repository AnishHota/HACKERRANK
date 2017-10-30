n = int(input())
heights = list(map(int,input().strip().split()))
setHeights = set(heights)
print(sum(setHeights)/len(setHeights))
