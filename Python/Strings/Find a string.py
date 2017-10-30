def count_substring(string, sub_string):
    k=1
    flag=0
    count=0
    for i in range(len(string)):
        flag=0
        if string[i] == sub_string[0] and (len(string)-i)>=len(sub_string):
            k=i+1
            for j in range(1,len(sub_string)):
                if string[k]!=sub_string[j]:
                    flag =1
                k+=1
            if flag==0:
                count+=1
    return count
if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count) 