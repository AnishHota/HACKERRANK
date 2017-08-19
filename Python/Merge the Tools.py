s = input()
k = int(input())
temp=[]
count=1
for i in range(len(s)):
    if s[i] not in temp:
        temp.append(s[i])
    if count==k:
        print(''.join(temp))
        temp=[]
        count=1
    else:
        count+=1
