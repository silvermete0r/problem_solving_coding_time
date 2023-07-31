// https://codeforces.com/problemset/problem/580/C

#include <bits/stdc++.h>
#include <fstream>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long
#define TxtIO freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
 
using namespace std;

const int N = 1e5 + 10;
int cats[N], visited[N];
vector<vector<int>> graph;
int n, m, x, y, z, ans = 0;

void dfs(int u, int cnt) {
	if(visited[u]) return;
	if(cnt + cats[u] > m) return;
	if(cats[u] == 0) cnt = 0;
	if(u!=1 && graph[u].size() == 1) {
		ans++;
		return;
	}
	visited[u] = 1;
	for(int x : graph[u]) {
		if(visited[x] == 0) dfs(x, cnt+cats[u]);
	}
	visited[u] = 0;
}

int main() {
//	TxtIO;
	scanf("%d %d", &n, &m);
	for(int i=1; i<=n; i++) scanf("%d", &cats[i]);
	graph.resize(n+1);
	for(int i=1; i<n; i++) {
		scanf("%d %d", &x, &y);
		graph[x].push_back(y);
		graph[y].push_back(x);
	}
	dfs(1, 0);
	printf("%d\n", ans);
    return 0;
}
