# Floyd's Algorithm

n = int(input())
g = {}

for i in range(1, n+1):
    vals = list(map(int, input().strip().split()))
    for j in range(1, n+1):
        if i in g:
            g[i][j] = vals[j-1]
        else:
            g[i] = {j: vals[j-1]}
        
for k in range(1, n+1):
    for i in range(1, n+1):
        for j in range(1, n+1):
            if g[i][j] == -1 and (g[i][k] != -1 and g[k][j] != -1):
                g[i][j] = g[i][k] + g[k][j]
            if g[i][j] == -1 or g[i][k] == -1 or g[k][j] == -1:
                continue
            g[i][j] = min(g[i][j], g[i][k] + g[k][j])
mx = 0
for i in range(1, n+1):
    for j in range(1, n+1):
        mx = max(mx, g[i][j])
print(mx)
