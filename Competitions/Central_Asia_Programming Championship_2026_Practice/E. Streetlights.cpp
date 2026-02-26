/*
@silvermete0r
*/

#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define ll long long
#define TxtIO freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);

const int PI = 3.1415926535897932384626433832795;
const int MOD = 1e9 + 7;
const int INF = 1e9 + 7;
const int N = 1e9; 

using namespace std;

/* NOTES:

*/

void solve() {
	int n, k, L, R;
	cin>>n>>k>>L>>R;
	vector<int> a(n);
	for(int& e : a) cin>>e;
	sort(all(a));
	vector<int> s(L + 1, 0);
	for(int& e : a) {
		s[max(0, e - R)] += 1;
		s[min(L, e + R)] -= 1;
	}
	int ans = 0;
	priority_queue<int> pq;
	for(int i=1; i<L; i++) {
		s[i] += s[i-1];
	}
	for(int i=0; i<L; i++) {
		if(s[i] == 0) {
			int p = i;
			while(i<L && s[i] == 0) i++;
			pq.push(i - p);
			i--;
		} else {
			ans++;
		}
	}
//	for(int i=0; i<L; i++) {
//		cout<<s[i]<<" ";
//	}
//	cout<<"\n";
	int x = 2 * R;
	while(!pq.empty() && k > 0) {
		int g = pq.top(); pq.pop();
		if(g > x) {
			ans += x;
			pq.push(g - x);
		} else {
			ans += g;
		}
		k--;
	}
	cout<<ans<<"\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //	TxtIO;
	int t = 1;
//	cin>>t;
	while(t--) solve();
    return 0;
}
