// https://codeforces.com/problemset/problem/116/C

from collections import defaultdict

def main():
    visited = {}
    def dfs(graph, x, sz):
        if x in visited:
            return 0
        visited[x] = 1
        if x not in graph:
            return sz+1
        mx = 0
        for g in graph[x]:
            val = dfs(graph, g, sz+1)
            if val > mx:
                mx = val
        return mx
        
    n = int(input())
    graph = defaultdict(list)
    boss = []
    for i in range(1, n+1):
        x = int(input())
        if x!=-1:
            graph[x].append(i)
        else:
            boss.append(i)
    ans = 0
    for x in boss:
        visited.clear()
        ans = max(dfs(graph, x, 0), ans)
    print(ans)
if __name__ == "__main__":
    main()
