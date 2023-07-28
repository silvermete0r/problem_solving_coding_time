#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))
 
void solve(vector<int>& vec) {
	next_permutation(vec.begin(), vec.end());
}
 
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    freopen("success.in", "r", stdin);
 	freopen("success.out", "w", stdout);
 
	int n;
	cin>>n;
	
	vector<int> vec(n);
	for(int i=0; i<n; i++) {
		cin>>vec[i];
	}
	solve(vec);
	for(int i=0; i<n; i++) {
		cout<<vec[i]<<" ";
	}
    return 0;
}
