// link: task permalink
 
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
 
#define MOD 1e7
#define PI 3.1415926535897932384626433832795
#define ll long long
#define iMax INT_MAX
#define iMin INT_MIN
#define TxtIO freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
 
using namespace std;

void solve () {
	int n, m;
	cin>>n>>m;
	vector<int> a(n), b(m);
	int mxA = 0, mxB = 0;
	for(int i=0; i<n; i++) {
		cin>>a[i];
		mxA += a[i];
	}
	for(int i=0; i<m; i++) {
		cin>>b[i];
		mxB += b[i];
	}
	if(mxA > b.size()) cout<<"Y";
	else cout<<"N";
	if(mxA >= mxB && mxB >= a.size() || mxB >= mxA && mxA >= b.size()) cout<<"Y";
	else cout<<"N";
	if(mxB > a.size()) cout<<"Y\n";
	else cout<<"N\n";
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t=1;
    cin>>t;
    while(t--) {
    	solve();
	}
    
    return 0;
}
