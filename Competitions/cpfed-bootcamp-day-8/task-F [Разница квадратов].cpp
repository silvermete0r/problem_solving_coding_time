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
	ll nums[5][2];
	ll t;
	cin>>t;
	vector<string> ans(t);
	for(int i=0; i<t; i++) cin>>nums[i][0]>>nums[i][1];
	for(int i=0; i<t; i++) {
		ll x = nums[i][0] - nums[i][1];
		ll y = nums[i][0] + nums[i][1];
		if(x == 1 && isPrime(y)) ans[i] = "YES";
		else ans[i] = "NO";
	}
	for(int i=0; i<t; i++) cout<<ans[i]<<"\n";
    return 0;
}
