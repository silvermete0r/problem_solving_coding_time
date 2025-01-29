// link: https://constructor2025.contest.codeforces.com/group/8Kn6fqj9Vx/contest/571552

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

#define PI 3.1415926535897932384626433832795
#define ll long long
#define iMax INT_MAX
#define iMin INT_MIN
#define TxtIO freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);

using namespace std;

const int MOD = 998244353;

/*
NOTES:

*/

void solve() {
	string s;
	cin>>s;
	int n = s.size();
	int streak = 0;
	for(int i=n-1; i>=0; i--) {
		if(s[i] != 'O' && isalpha(s[i])) {
			if(streak) break;
			cout<<"YES\n";
			return;
		}
		if(s[i] == '0' || s[i] == 'O') streak++;
		else streak = 0;
	}
	if(streak || isalpha(s.back())) cout<<"NO\n";
	else cout<<"YES\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //	TxtIO;
    int t = 1;
    cin>>t;
    while(t--) {
    	solve();	
	}
    return 0;
}
