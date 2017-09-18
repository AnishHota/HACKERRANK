string = input()
totlen = int(input())
count=0
counta = string.count('a')
count += int((totlen/len(string)))*counta
count += string[:(totlen%len(string))].count('a')
print(count)
