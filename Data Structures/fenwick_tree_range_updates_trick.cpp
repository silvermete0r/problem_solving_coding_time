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
const int INF = 1e9 + 7;
const int MAXN = 2e6 + 7;
 
using namespace std;
 
/* NOTES:
cses problem ref.: https://cses.fi/problemset/task/1651
*/

template <typename T>
struct FenwickTree {
    int n;
    vector<T> bit;
    
    // build from array in O(n)
    FenwickTree(const vector<T>& a) {
        n = (int)a.size();
        bit = a;
        for(int i = 0; i < n; i++) {
            int j = i | (i + 1);
            if (j < n) {
                bit[j] += bit[i];
            }
        }
    }
	
    // add `delta` to index idx
    void add(int idx, T delta) {
        while(idx < n) {
            bit[idx] += delta;
            idx = idx | (idx + 1);
        }
    }
	
    // sum of range [0, r]
    T sum(int idx) {
        T res = 0;
        while(idx >= 0) {
            res += bit[idx];
            idx = (idx & (idx + 1)) - 1;
        }
        return res;
    }
};
 
void solve() {
	int n, q; cin>>n>>q;
	vector<int> a(n);
	for(int& e : a) cin>>e;
	vector<ll> diff(n);
	diff[0] = a[0];
	for(int i=1; i<n; i++) {
		diff[i] = a[i] - a[i-1];
	}
	FenwickTree<ll> fwt(diff);
	while(q--) {
		int op; cin>>op;
		if(op == 1) {
			int l, r;
			ll u;
			cin>>l>>r>>u;
			l--; r--;
			fwt.add(l, u);
			if(r + 1 < n) {
				fwt.add(r + 1, -u);
			}
		} else { // 2
			int k; cin>>k;
			k--;
			cout<<fwt.sum(k)<<"\n";
		}
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
