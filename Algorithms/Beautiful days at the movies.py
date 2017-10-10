i,j,k = map(int,input().split())
count=0
def reverse(Number):
    Reverse = 0
    while(Number > 0):
        Reminder = Number %10
        Reverse = (Reverse *10) + Reminder
        Number = Number //10
    return(int(Reverse))
for x in range(i,j):
    if abs(x-reverse(x))%k==0:
        count+=1
print(count)
