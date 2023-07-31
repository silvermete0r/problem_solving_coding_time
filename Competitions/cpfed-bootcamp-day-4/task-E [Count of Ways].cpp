// https://codeforces.com/problemset/problem/466/C/

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long
#define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);

using namespace std;

ll solve(vector<ll> &pref, ll n) {
	if(pref[n-1]%3!=0) return 0;
	ll ans = 0, cnt = 0;
	for(int i=0; i<n-1; i++) {
		ll sum_3 = pref[n-1] - pref[i];
		if(sum_3 == pref[n-1]/3) ans += cnt;
		if(pref[i] == pref[n-1]/3) cnt++;
	}
	return ans;
}


int main() {
	//	TxtIO;
	ll n;
	cin>>n;
	vector<ll> pref(n);
	cin>>pref[0];
	for(ll i=1; i<n; i++) {
		ll val;
		cin>>val;
		pref[i] = pref[i-1] + val;
	}
	cout<<solve(pref, n);
    return 0;
}
