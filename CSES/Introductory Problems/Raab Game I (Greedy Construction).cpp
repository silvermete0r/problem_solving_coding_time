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
const int MAXN = 1e6 + 7;

using namespace std;

/* NOTES:
*/


void solve() {
	int n, a, b; cin>>n>>a>>b;
	if((a + b) > n || (a == 0 && b != 0) || (a != 0 && b == 0)) {
		cout<<"NO\n";
		return;
	}
	vector<int> ar(n), br(n);
	for(int i=0; i<n; i++) {
		ar[i] = i + 1;
		br[i] = i + 1;
	}
	if((n % 2 == 1 && a == b && (a + b) == (n - 1)) || (a == b && (a + b == n)) || a == 0) {
		if(a != 0) {
			reverse(all(br));
		}
	} else {
		int pA = a, pB = b;
		if(pA > pB) swap(pA, pB);
		int imax = pA + pB - 1;
		int ind = 0;
		while(pA--) {
			swap(br[ind], br[imax]);
			ind++;
		}
		ind = 0;
		imax--;
		pB--;
		while(pB--) {
			swap(br[ind], br[imax]);
			imax--;
		}
		if(a > b) swap(ar, br);
	}
	cout<<"YES\n";
	for(int x : ar) cout<<x<<" ";
	cout<<"\n";
	for(int x : br) cout<<x<<" ";
	cout<<"\n";
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
