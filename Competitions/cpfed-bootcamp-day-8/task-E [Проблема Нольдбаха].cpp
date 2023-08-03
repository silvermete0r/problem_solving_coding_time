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
	ll n, k;
	cin>>n>>k;
	vector<bool> p(n+1, 1);
	p[0] = p[1] = 0;
	vector<ll> primes;
	for(int i=2; i<=n; i++) {
		if(p[i]) {
			for(int j=i*2; j<=n; j+=i) p[j] = 0;
			primes.pb(i);	
		}
	}
	int x = 0;
	for(int i=0; i<primes.size()-1; i++) {
		ll val = primes[i] + primes[i+1] + 1;
		if(val <= primes[primes.size()-1]) {
			if(isPrime(val)) x++;
		} else break;
	}
	if(x>=k) cout<<"YES";
	else cout<<"NO";
    return 0;
}
