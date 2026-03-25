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
cses problem ref.: https://cses.fi/problemset/task/2164

The Josephus Problem - Numberphile (youtube): https://youtu.be/uCsD3ZGzMgE?si=lGfGo_diHK_W7DRX
*/

int helper(int n, int k) {
	if(n == 1) return 1;
	int x = (n + 1) / 2;
	if(k <= x) {
		if(2 * k > n) return 2 * k % n;
		return 2 * k;
	}
	int res = helper(n - x, k - x);
	if(n % 2 == 0) return 2 * res - 1;
	return 2 * res + 1;
}

void solve() {
	int n, k; cin>>n>>k;
	cout<<helper(n, k)<<"\n";
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
