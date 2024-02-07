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

/*
HHTTTTHTTT | k = 1
2413
*/

void solve () {
	int n, k;
	cin>>n>>k;
	string s;
	cin>>s;
	vector<int> vec;
	int cur = 1;
	s += "x";
	for(int i=1; i<=n; i++) {
		if(s[i-1] == s[i]) cur++;
		else {
			vec.push_back(cur);
			cur = 1;
		}
	}
	n = vec.size();
	k = min(k+1, n);
	int cur_sum = 0;
	for(int i=0; i<k; i++) cur_sum += vec[i];
	int ans = cur_sum;
	for(int i=0; i<n-k; i++) {
		cur_sum -= vec[i];
		cur_sum += vec[i+k];
		ans = max(ans, cur_sum);
	}
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
