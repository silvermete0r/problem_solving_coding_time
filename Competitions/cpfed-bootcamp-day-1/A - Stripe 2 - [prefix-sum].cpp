// https://codeforces.com/problemset/problem/21/C

#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))

ll solve(vector<ll>& vec, ll n) {
	vector<ll> pref(n);
	pref[0] = vec[0];
	for(ll i=1; i<n; i++) pref[i] = pref[i-1] + vec[i];
	if(pref[n-1]%3!=0) return 0;
	ll ans = 0, cnt = 0;
	for(ll x=0; x<n-1; x++) {
		ll sum_3 = pref[n-1] - pref[x];
		if(sum_3 == pref[n-1]/3) ans += cnt;
		if(pref[x] == pref[n-1]/3) cnt++;
	}
	return ans;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin>>n;
	vector<ll> vec(n);
	for(ll i=0; i<n; i++) {
		cin>>vec[i];
	}
	cout<<solve(vec, n);
    	return 0;
}
