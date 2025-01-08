import sys

sys.stdin = open('input.txt')

n,m = map(int, input().split())
graph = [[] for _ in range(n+1)]

for _ in range(m):
    x,y = map(int, input().split())
    graph[x].append(y)

s,t = map(int, input().split())

print(n,m)
print(graph)
print(s,t)

def dfs(now, graph, visit) :
    if visit[now] == 1:
        return
    visit[now] = 1
    for neighbor in graph[now]:
        dfs(neighbor, graph, visit)
    return