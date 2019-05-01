height = list(map(int,input().strip().split()))
word = input()
ma=height[0]
for i in word:
    if height[ord(i)-97]>ma:
        ma=height[ord(i)-97]
print(ma*len(word))
