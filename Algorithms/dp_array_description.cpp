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
cses problem ref.: https://cses.fi/problemset/task/1746/
*/

void solve() {
	int n, m; cin>>n>>m;
	vector<int> a(n);
	for(int& e : a) cin>>e;
	vector<vector<ll>> dp(n, vector<ll> (m, 0));
	if(a[0] == 0) {
		for(int j=0; j<m; j++) dp[0][j] = 1;
	} else {
		dp[0][a[0]-1] = 1;
	}
	for(int i=1; i<n; i++) {
		if(a[i] == 0) {
			for(int j=0; j<m; j++) {
				ll res = dp[i-1][j];
				if(j - 1 >= 0) res = (res + dp[i-1][j-1]) % MOD;
				if(j + 1 < m) res = (res + dp[i-1][j+1]) % MOD;
				dp[i][j] = res;
			}
		} else {
			int k = a[i] - 1;
			ll res = dp[i-1][k];
			if(k - 1 >= 0) res = (res + dp[i-1][k-1]) % MOD;
			if(k + 1 < m) res = (res + dp[i-1][k+1]) % MOD;
			dp[i][k] = res;
		}
	}
	ll ans = 0;
	for(int j=0; j<m; j++) {
		ans = (ans + dp[n-1][j]) % MOD;
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
