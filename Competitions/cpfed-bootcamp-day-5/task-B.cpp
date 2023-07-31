// https://codeforces.com/problemset/problem/466/C/?locale=ru

#include <bits/stdc++.h>
#include <fstream>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long
#define TxtIO freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
 
using namespace std;

int main() {
//	TxtIO;
	ll n;
	cin>>n;
	vector<ll> vec(n, 0);
	cin>>vec[0];
	for(int i=1; i<n; i++) {
		ll val;
		cin>>val;
		vec[i] = vec[i-1] + val;
	}
	ll cnt = 0, ans = 0;
	if(vec[n-1] % 3 == 0) {
		for(int i=0; i<n-1; i++) {
			ll sum_3 = vec[n-1] - vec[i];
			if(sum_3 == vec[n-1] / 3) ans += cnt;
			if(vec[i] == vec[n-1] / 3) cnt++;
		}
	}
	cout<<ans;
    return 0;
}
