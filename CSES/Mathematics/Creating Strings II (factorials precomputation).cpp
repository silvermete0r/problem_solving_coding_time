/*
@silvermete0r
*/

#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define ll long long

const int PI = 3.1415926535897932384626433832795;
const int MOD = 1e9 + 7;
const int INF = 1e9 + 7;
const int MAXN = 1e6 + 7;

using namespace std;

ll fact[MAXN], inv_fact[MAXN];

ll binpow(ll a, ll b) {
	ll res = 1;
	while(b) {
		if(b & 1) res = res * a % MOD;
		a = a * a % MOD;
		b >>= 1;
	}
	return res;
}

void precompute_factorials(int n) {
	fact[0] = inv_fact[0] = 1;
	for(int i=1; i<=n; i++) {
		fact[i] = fact[i-1] * i % MOD;
	}
	inv_fact[n] = binpow(fact[n], MOD - 2);
	for(int i=n-1; i>=1; i--) {
		inv_fact[i] = inv_fact[i+1] * (i + 1) % MOD;
	}
}

void solve() {
	string s; cin>>s;
	vector<int> freq(26, 0);
	for(char ch : s) freq[ch - 'a']++;
	ll n = s.size();
	precompute_factorials(n);
	ll ans = fact[n];
	for(int i=0; i<26; i++) {
		if(freq[i]) {
			ans = ans * inv_fact[freq[i]] % MOD;
		}
	}
	cout<<ans<<"\n";
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
