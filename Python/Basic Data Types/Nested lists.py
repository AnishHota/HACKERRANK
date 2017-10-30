import operator
n = int(input())
scoreList=[]
lis = []
for i in range(n):
    name = input()
    score = float(input())
    scoreList.append(score)
    lis.append([name,score])
minimum = min(scoreList)
scoreList = [x for x in scoreList if x!=minimum]
lis.sort(key=operator.itemgetter(0))
for x in lis:
    if x[1]==min(scoreList):
        print(x[0])
