// link: https://mycod.net/index.php/tasksdecision/index/559

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

void solve() {}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	//	TxtIO;
	int m, s, i, k;
	cin >> m >> s;
	if (s < 1 && m > 1 || s > m * 9) {
		cout << "-1 -1";
		return 0;
	}	
	for (i = m - 1, k = s; i >= 0; i--) {
		int j = max(0, k - 9 * i);
		if (j == 0 && i == m - 1 && k) {
			j = 1;
		}
		cout << j;
		k -= j;
	}
	cout << " ";
	for (i = m - 1, k = s; i >= 0; i--) {
		int j = min(9, k);
		cout << j;
		k -= j;
	}
}
