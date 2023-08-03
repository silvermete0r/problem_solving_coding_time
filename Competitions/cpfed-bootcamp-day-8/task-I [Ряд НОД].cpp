// link: task permalink

#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define uset unordered_set
#define umap unordered_map
#define ivec vector<int>
#define pii pair<int, int>
#define pb push_back
#define mk make_pair
#define all(x) (x).begin(), (x).end()

#define MOD 1e7
#define ll long long
#define iMax INT_MAX
#define iMin INT_MIN
#define TxtIO freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
 
using namespace std;

bool isPrime(ll n) {
	if(n<=1) return false;
	for(ll i=2; i<=sqrt(n); i++) {
		if(n%i==0) return false;
	}
	return true;
}

ll gcd(ll a, ll b) {
	return b ? gcd (b, a % b) : a;
}

ll binpow(ll a, ll n) {
	int res = 1;
	while(n) {
		if(n&1) res*=a;
		a *= a;
		n >>= 1;
	}
	return res;
}

void solve() {}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	//	TxtIO;
	ll n, m;
	cin>>n>>m;
	vector<ll> a(n);
	for(ll i=0; i<n; i++) cin>>a[i];
	sort(a.begin(), a.end());
	
	ll gcd_(0);
	
	for(ll i=1; i<n; i++) {
		gcd_ = gcd(gcd_, a[i]-a[i-1]);
	}
	
	for(ll i=0; i<m; i++) {
		ll b;
		cin>>b;
		b += a[0];
		ll res = gcd(b, gcd_);
		printf("%lld ", res);
	}
    return 0;
}
