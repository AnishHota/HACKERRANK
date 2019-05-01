time = input()
if time[8]=='P':
    newTime = int(time[:2])+12
    if newTime == 24: #12 noon
        newTime = '12'
    newtime = str(newTime)+time[2:8]
    print(newtime)
elif int(time[:2])==12 and time[8]=='A': # 12 midnight
    newTime = '00'+time[2:8]
    print(newTime)
else:
    print(time[:8])
