/*
@silvermete0r
*/

#pragma GCC optimize("O3")

#include <bits/stdc++.h>

// PBDS Headers
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define ll long long
#define TxtIO freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);

const int PI = 3.1415926535897932384626433832795;
const int MOD = 998244353;
const int INF = 1e9 + 7;
const int N = 1e9; 

using namespace std;

// Ordered Multiset using pair<int, int> to safely handle duplicates
using namespace __gnu_pbds;
typedef tree<
    pair<int, int>, 
    null_type, 
    less<pair<int, int>>, 
    rb_tree_tag, 
    tree_order_statistics_node_update> 
ordered_multiset;

/* NOTES:
Problem D. Prefix Sorting

You are given an array a of n integers.
You need to process q queries of two types:
• 1 i — sort the prefix a[1], a[2], . . . , a[i] in nondecreasing order;
• 2 i — output the current value of the element a[i].
The queries are processed in the given order. Each query is applied to 
the current state of the array.

constraints: (1 <= n, q, a[i] <= 2 * 10^5)

*/

void solve() {
	int n, q; cin>>n>>q;
	vector<int> a(n + 1);
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	ordered_multiset os;
	int max_len = 0;
	while(q--) {
		int type; cin>>type;
		int idx; cin>>idx;
		if(type == 1) {
			if(idx > max_len) {
				for(int j=max_len+1; j<=idx; j++) {
					os.insert({a[j], j});
				}
				max_len = idx;
			}
		} else { // type 2
			if(idx > max_len) {
				cout<<a[idx]<<"\n";
			} else {
				auto it = os.find_by_order(idx - 1);
				cout<<it->first<<"\n";
			}
		}
	}
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
