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
const int MAXN = 2e6 + 7;
 
using namespace std;
 
/* NOTES:
The Z-function is a string-processing algorithm that constructs an array z 
of length n for a string S, where z[i] is the length of 
the longest common prefix between S and the suffix starting at S[i].
Time Complexity: O(N)

cses problem ref.: https://cses.fi/problemset/task/1753
*/

vector<int> z_function(const string& s) {
	int n = s.size();
	vector<int> z(n);
	int l = 0, r = 0;
	for(int i=1; i<n; i++) {
		if(i <= r) {
			z[i] = min(r - i + 1, z[i - l]);
		}
		while(i + z[i] < n && s[z[i]] == s[i + z[i]]) {
			z[i]++;
		}
		if(i + z[i] - 1 > r) {
			l = i;
			r = i + z[i] - 1;
		}
	} 
	return z;
}

void solve() {
	string text; cin>>text;
	string pattern; cin>>pattern;
	string s = pattern + "#" + text;
	vector<int> z = z_function(s);	
	int m = pattern.size();
	int cnt = 0;
	for(int i=m+1; i<(int)s.size(); i++) {
		if(z[i] == m) cnt++;
	}
	cout<<cnt<<"\n";
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
