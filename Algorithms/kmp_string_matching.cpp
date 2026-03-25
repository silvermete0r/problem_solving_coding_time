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
KMP (Knuth-Morris-Pratt) Algorithm is an efficient 
string-matching algorithm that finds occurrences of 
a "pattern" string within a larger "text" string in linear time, 
specifically O(n+m)

cses problem ref.: https://cses.fi/problemset/task/1753
*/

// build LPS (Longest Prefix Suffix)
vector<int> build_lps(const string& p) {
	int m = p.size();
	vector<int> lps(m, 0);
	int j = 0;
	for(int i=1; i<m; i++) {
		while(j > 0 && p[i] != p[j]) {
			j = lps[j - 1];
		}
		if(p[i] == p[j]) j++;
		lps[i] = j;
	}
	return lps;
}

// KMP search
vector<int> kmp(const string& text, const string& p) {
	vector<int> lps = build_lps(p);
	vector<int> occurences;
	int n = text.size(), m = p.size();
	int j = 0;
	for(int i=0; i<n; i++) {
		while(j > 0 && text[i] != p[j]) {
			j = lps[j - 1];
		}
		if(text[i] == p[j]) j++;
		if(j == m) {
			occurences.push_back(i - m + 1); 
			j = lps[j - 1];
		}
	}
	return occurences;
}

void solve() {
	string text; cin>>text;
	string pattern; cin>>pattern;
	vector<int> res = kmp(text, pattern);
	cout<<(int)res.size()<<"\n";	
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
