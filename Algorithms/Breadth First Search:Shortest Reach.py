#n:no. of nodes
#m: no. of edges
for _ in range(int(input())):
    graph = {}
    n,m = map(int,input().strip().split())
    for i in range(m):
        u,v = map(int,input().strip().split())
        if u not in graph:
            graph[u]=[v]
        elif v not in graph[u]:
            graph[u].append(v)
        if v not in graph:
            graph[v]=[u]
        elif u not in graph[v]:
            graph[v].append(u)
    s = int(input())
    visited=[s]
    count=1
    flag=0
    score={}
    levels={}
    if len(graph)!=0:
        for i in visited:
            if i in graph:
                for x in graph[i]:
                    if x not in visited:
                        visited.append(x)
                        if i in score:
                            score[x]=score[i]+6
                        else:
                            score[x]=6
    for i in range(1,n+1):
        if i in score and i!=s:
            print(score[i],end=' ')
        elif i!=s:
            print(-1,end=' ')
    print()
