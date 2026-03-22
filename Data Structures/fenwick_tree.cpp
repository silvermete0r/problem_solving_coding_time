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
Fenwick Tree (Binary Indexed Tree) = prefix sum represented as a sum of binary-sized blocks
* point update + prefix/range sum
* fast and simple alternative to segment tree

cses problem ref.: https://cses.fi/problemset/task/1648/
*/

template <typename T>
struct FenwickTree {
    int n;
    vector<T> bit;

    FenwickTree(int n) : n(n), bit(n, 0) {}
    
    // build from array in O(n)
    FenwickTree(const vector<T>& a) {
        n = (int)a.size();
        bit = a;
        for (int i = 0; i < n; i++) {
            int j = i | (i + 1);
            if (j < n) {
                bit[j] += bit[i];
            }
        }
    }
	
	  // add `delta` to index i
    void add(int i, T delta) {
        for (; i < n; i = i | (i + 1)) {
            bit[i] += delta;
        }
    }
	
    // sum of range [0, r]
    T sum(int r) {
        T res = 0;
        for (; r >= 0; r = (r & (r + 1)) - 1) {
            res += bit[r];
        }
        return res;
    }
    
    // update/set logic*
    void set(int i, ll val) {
	    ll cur = sum(i, i);
	    add(i, val - cur);
	}

    // sum of range [l, r]
    T sum(int l, int r) {
        if (l > r) return 0;
        return sum(r) - (l ? sum(l - 1) : 0);
    }
};

void solve() {
	int n, q; cin>>n>>q;
	vector<ll> a(n);
	for(ll& e : a) cin>>e;
	FenwickTree<ll> fwt(a);
	while(q--) {
		int op, x, y; cin>>op>>x>>y;
		if(op == 1) {
			fwt.set(x-1, y);
		} else { // op = 2
			cout<<fwt.sum(x-1, y-1)<<"\n";
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
