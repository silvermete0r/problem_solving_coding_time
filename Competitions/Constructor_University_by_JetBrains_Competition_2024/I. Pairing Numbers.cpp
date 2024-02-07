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
	vector<int> pos, neg;
	int zero = 0;
	for(int i=0; i<n; i++) {
		int val;
		cin>>val;
		if(!val) zero++;
		else if(val < 0) neg.push_back(val);
		else pos.push_back(val);
	}
	sort(neg.begin(), neg.end());
	sort(pos.begin(), pos.end());
	int ans = 0;
	n = neg.size();
	int p = pos.size();
	for(int i=1; i<n; i+=2) {
		ans += (neg[i] * neg[i-1]);
	}
	for(int i=p-1; i>0; i-=2) {
		if(pos[i-1] == 1) {
			ans += (pos[i-1] + pos[i]);
		} else {
			ans += (pos[i] * pos[i-1]);
		}
	}
	if(n&1 && !zero) ans += neg[n-1];
	if(p&1) ans += pos[0];
	cout<<ans<<"\n";
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
