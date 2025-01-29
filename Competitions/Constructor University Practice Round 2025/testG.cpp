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
    int n;
    cin >> n;
    vector<int> ans(n, 0);
    bool flag = false;
    string s;
    for(int i=0; i<n; i++) {
    	if(!flag) {
	    	cout<<"2 "<<i+1<<endl;
	    	cout.flush();
	    	cin>>s;
	    	if(s == "ERROR") exit(0);
			cin>>s;
			int v = stoi(s);
			if(v < 0) {
				ans[i] = v;
				continue;
			} else {
				flag = true;
				i--;
			}
		} else {
			cout<<"1 "<<i+1<<endl;
			cout.flush();
			cin>>s;
			if(s == "ERROR") exit(0);
			cin>>s;
			int v = stoi(s);
			ans[i] = v;
		}
    }
    cout<<"0 ";
    for(int a : ans) cout<<a<<" ";
	cout<<endl;
    cin>>s;
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
