arr = []
count=0
for _ in range(int(input())):
    inp = input()
    if inp[0]=='1':
        x,y = inp.split()
        if len(arr)==0:
            arr.append(int(y))
        elif int(y)>arr[0]:
            arr[0]=int(y)
        else:
            arr.append(arr[0])
    elif inp[0]=='2':
        arr.pop()
    else:
        print(arr[-1])
