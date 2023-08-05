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

bool cmp (pii x, pii y) {
	return (x.second < y.second);
}

void solve () {}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	//	TxtIO;
	ll n;
	cin>>n;
	vector<pll> lr(n);
	for(ll i=0; i<n; i++) cin>>lr[i].first>>lr[i].second;
	sort(all(lr), cmp);
	ll ans = 1, i = 0, j = i+1;
	while(i<n-1) {
		if(lr[i].second < lr[j].first) {
			ans++;
			i = j;
			j = i+1;
		} else j++;
		if(j >= n) break;
	}
	cout<<ans;
    return 0;
}
