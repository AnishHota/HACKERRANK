s = input()
changed=0
for i in range(len(s)):
    if (i-1)%3==0:
        if s[i]!='O':
            changed+=1
    else:
        if s[i]!='S':
            changed+=1
print(changed)
