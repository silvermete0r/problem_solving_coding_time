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
 
using namespace std;

void solve() {
	int n;
    cin >> n;
    vector<ll> p(n);
    ll total = 0;
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
        total += p[i];
    }
 
    ll ans = LLONG_MAX;
    for (int mask = 0; mask < (1 << n); ++mask) {
        ll subset_sum = 0;
        for (int i = 0; i < n; ++i) {
            if (mask & (1 << i)) {
                subset_sum += p[i];
            }
        }
        ll other_sum = total - subset_sum;
        ans = min(ans, abs(subset_sum - other_sum));
    }
 
    cout << ans << "\n";
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
