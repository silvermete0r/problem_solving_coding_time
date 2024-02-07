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
	int n;
	cin>>n;
	vector<int> vec(n);
	int mx = 0;
	for(int i=0; i<n; i++) {
		cin>>vec[i];
		mx = max(mx, vec[i]);
	}
	bool isZero = true;
	set<int> xs;
	for(int i=0; i<n; i++) {
		if(vec[i] == mx) {
			if(isZero) cout<<0<<" ";
			else cout<<mx<<" ";
			isZero = !isZero;
		} else {
			int val = max(vec[i], mx-vec[i]);
			if(xs.find(val) != xs.end()) val = mx - val;
			cout<<val<<" ";
			xs.insert(val);
		}
	}
	cout<<"\n";	
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
