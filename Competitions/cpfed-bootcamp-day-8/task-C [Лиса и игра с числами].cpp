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
	for(int i=2; i<=sqrt(n); i++) {
		if(n%i==0) return false;
	}
	return true;
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
	int n;
	cin>>n;
	vector<int> x(n);
	for(int i=0; i<n; i++) cin>>x[i];
	int mn = *min_element(x.begin(), x.end());
	int xp = -1;
	while(true) {
		for(int i=0; i<n; i++) {
			if(x[i]%mn==0) x[i] = mn;
			else if(x[i]%mn!=0) {
				x[i] %= mn;
				xp = x[i];
			}
		}
		if(xp == -1) break;
		mn = xp;
		xp = -1;
	}
	cout<<mn * x.size();
    return 0;
}
