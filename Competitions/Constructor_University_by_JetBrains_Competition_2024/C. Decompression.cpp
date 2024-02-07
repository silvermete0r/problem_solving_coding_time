// link: task permalink
 
#pragma GCC optimize("O3")
 
#include <bits/stdc++.h>
 
#define uset unordered_set
#define umap unordered_map
#define vi vector<int>
#define vii vector<int, int>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>
#define pb push_back
#define eb emplace_back
#define mk make_pair
#define all(x) (x).begin(), (x).end()
 
#define MOD 1e7
#define PI 3.1415926535897932384626433832795
#define ll long long
#define iMax INT_MAX
#define iMin INT_MIN
#define TxtIO freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
 
using namespace std;

void solve () {
	string s;
	cin>>s;
	string ans = "";
	int n = s.size();
	for(int i=1; i<n; i+=2) {
		if(isalpha(s[i])) ans += string(s[i-1]-'0', s[i]);
		else ans += string(s[i]-'0', s[i-1]);
	}
	cout<<ans<<"\n";
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t=1;
    cin>>t;
    while(t--) {
    	solve();
	}
    
    return 0;
}
