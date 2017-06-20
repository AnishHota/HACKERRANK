n = int(input())
a=list(map(int,input().split()))
largest = max(a)
a = [x for x in a if x!=largest]
secondLargest = max(a)
print(secondLargest)
