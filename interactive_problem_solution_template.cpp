/*
@silvermete0r
*/

#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define ll long long
#define TxtIO freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);

const int PI = 3.1415926535897932384626433832795;
const int MOD = 1e9 + 7;
const int MAXN = 2e5 + 7;
const int LOG = 18;

using namespace std;

/* NOTES:
task permalink: https://codeforces.com/contest/2258/problem/C
*/

int ask(int u, int v, int d) {
	int resp;
	cout<<"? "<<u<<" "<<v<<" "<<d<<endl;
	cin>>resp;
	if(resp == -1) exit(0);
	return resp;
}

void submit(int u, int v, int d) {
	cout<<"! "<<u<<" "<<v<<" "<<d<<endl;
}

void solve() {
	int n; cin>>n;
	int resp;
	int u = 1;
	int max_dist = 1, node = 2;
	for(int v=2; v<=n; v++) {
		bool flag = true;
		while(flag) {
			resp = ask(u, v, max_dist);
			if(resp) {
				node = v;
				max_dist++;
			} else {
				flag = false;
			}
		}
	}
	int next_node = 1;
	for(int v=1; v<=n; v++) {
		if(v == node) continue;
		bool flag = true;
		while(flag) {
			resp = ask(node, v, max_dist);
			if(resp) {
				next_node = v;
				max_dist++;
			} else {
				flag = false;
			}
		}
	}
	submit(node, next_node, max_dist - 1);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //	TxtIO;
	int t = 1;
	cin>>t;
	while(t--) solve();
    return 0;
}
