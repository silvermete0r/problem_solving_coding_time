// link: https://constructor2025.contest.codeforces.com/group/8Kn6fqj9Vx/contest/571552

#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define uset unordered_set
#define umap unordered_map
#define vi vector<int>
#define vii vector<int, int>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>
#define pb push_back
#define eb emplace_back
#define mk make_pair
#define all(x) (x).begin(), (x).end()

#define PI 3.1415926535897932384626433832795
#define ll long long
#define iMax INT_MAX
#define iMin INT_MIN
#define TxtIO freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);

using namespace std;

const int MOD = 998244353;

/*
NOTES:

*/

void solve() {
	int a, b, c, d;
	cin>>a>>b>>c>>d;
	int ans = 0;
	bool xP = false, yP = false;
	if(a == 0 || c == 0 || (a > 0 && c < 0) || (a < 0 && c > 0)) xP = true;
	if(b == 0 || d == 0 || (b > 0 && d < 0) || (b < 0 && d > 0)) yP = true;
	if(xP && yP) {
		ans = max(abs(a), abs(b)) + max(abs(c), abs(d));
	} else if(xP) {
		ans = abs(d - b);
	} else if(yP) {
		ans = abs(c - a);
	}
	cout<<ans<<"\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //	TxtIO;
    int t = 1;
//    cin>>t;
    while(t--) {
    	solve();	
	}
    return 0;
}
