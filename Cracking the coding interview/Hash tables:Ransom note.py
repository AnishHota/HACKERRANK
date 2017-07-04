from collections import Counter
m,n = map(int,input().strip().split())
wordsM = list(input().split())
wordsN = list(input().split())
wordsM = Counter(wordsM)
wordsN = Counter(wordsN)
result = not(Counter(wordsN)-Counter(wordsM))
if result:
    print('Yes')
else:
    print('No')
