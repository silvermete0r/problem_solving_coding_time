# Dijkstra's Algorithm

n, s, t = map(int, input().strip().split())
g = {}
for i in range(1, n+1):
    vals = list(map(int, input().strip().split()))
    for j in range(1, n+1):
        if i in g:
            g[i][j] = vals[j-1]
        else:
            g[i] = {j: vals[j-1]}
st = []
d = [float('inf') for _ in range(n+1)]
d[s] = 0
used = [0 for _ in range(n+1)]
while True:
    v = -1
    for i in range(1, n+1):
        if not used[i] and (v == -1 or d[v] > d[i]):
            v = i
    if v == -1:
        break
    for j in range(1, n+1):
        if g[v][j] != -1:
            d[j] = min(d[j], d[v] + g[v][j])
    used[v] = 1
if d[t] is float('inf'):
    print(-1)
else:
    print(d[t])
