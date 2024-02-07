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

ll id = 1;
vector<pair<ll, ll>> vec; // id, val
 
void solve () {
	string s;
	vector<ll> cmd;
	ll type;
	cin>>type;
	ll x, y;
	if(type == 1) {
		cin>>x;
	} else {
		cin>>x>>y;
	}
	if(type == 1) {
		vec.push_back({id, x});
	} else {
		ll sz = vec.size();
		vector<ll> ans;
		ll j = sz - 1;
		while(j>=0 && y) {
			if(vec[j].second >= x) {
				ans.push_back(vec[j].first);
				y--;
			}
			j--;
		}
		cout<<ans.size()<<"\n";
		for(ll& a : ans) cout<<a<<" ";
		cout<<"\n";
	}
	id++;
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
