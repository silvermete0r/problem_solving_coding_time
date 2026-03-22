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
After an initial preprocessing phase that takes $O(N \log N)$ time, it can answer any minimum range query in absolute constant time, $O(1)$. 
It achieves this by taking advantage of the fact that any range can be covered by exactly two overlapping intervals whose lengths are powers of 2.
*/

template <typename T>
struct SparseTable {
	vector<vector<T>> st;
	SparseTable(const vector<T>& a) {
		int n = a.size();
		if(n == 0) return;
		int log2 = __lg(n) + 1;
		st.assign(n, vector<T>(log2));
		for(int i=0; i<n; i++) {
			st[i][0] = a[i];
		}
		for(int k=1; k<log2; k++) {
			for(int i=0; i+(1<<k)<=n; i++) {
				// can be used in statis range queries also for max, gcd, etc.
				st[i][k] = min(st[i][k-1], st[i+(1<<(k-1))][k-1]);	
			}
		}
	}
	T query(int l, int r) {
		int k = __lg(r - l + 1);
		return min(st[l][k], st[r-(1<<k)+1][k]);
	}
};

void solve() {
	int n, q; cin>>n>>q;
	vector<int> a(n);
	for(int& e : a) cin>>e;
	SparseTable<int> rmq(a);
	while(q--) {
		int l, r; cin>>l>>r;
		l--; r--;
		cout<<rmq.query(l, r)<<"\n";
	}
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //	TxtIO;
	int t = 1;
	//	cin>>t;
	while(t--) solve();
    return 0;
}
