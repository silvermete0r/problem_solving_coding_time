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
            g[i][j] |= g[i][k] and g[k][j]

for i in range(1, n+1):
    vals = []
    for j in range(1, n+1):
        vals.append(g[i][j])
    print(" ".join([str(v) for v in vals]))
