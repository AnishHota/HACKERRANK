import re
for _ in range(int(input())):
    print('YES' if re.search('.*?'.join(list('hackerrank')),input().strip()) else 'NO')
