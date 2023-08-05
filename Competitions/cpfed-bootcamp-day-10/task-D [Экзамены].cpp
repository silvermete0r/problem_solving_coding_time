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

void solve () {}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	//	TxtIO;
	int n;
	cin>>n;
	vector<pii> ab(n);
	for(int i=0; i<n; i++) {
		cin>>ab[i].first>>ab[i].second;
	}
	sort(all(ab));
	int ans = -1;
	for(int i=0; i<n; i++) {
		if(ans <= ab[i].second) {
			ans = ab[i].second;
		} else {
			ans = ab[i].first;
		}
	}
	cout<<ans;
    return 0;
}
