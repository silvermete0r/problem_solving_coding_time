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
	ll x1, y1, x2, y2;
	cin>>x1>>y1>>x2>>y2;
	ll dif1 = abs(x2-x1), dif2 = abs(y2-y1);
	cout<<gcd(dif1, dif2) + 1;
    return 0;
}
