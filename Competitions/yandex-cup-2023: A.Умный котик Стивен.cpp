// link: https://contest.yandex.ru/contest/3/enter/

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
	int n;
    cin >> n;
    vector<int> vec(n), last(n + 1, -1);
    
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    for (int i = n-1; i >= 0; i--) {
    	if(last[vec[i]] == -1) last[vec[i]] = i;	
	}

    int ans = 0;
    int cur_start = -1;
    
    for(int i = 1; i <= n; i++) {
    	if(last[i]>cur_start) {
    		cur_start = last[i];
    		ans++;
		} else {
			break;
		}
    }

    cout << ans;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	//	TxtIO;
	ll t = 1;
//	cin>>t;
	while(t--) {
		solve();
	}
    return 0;
}
