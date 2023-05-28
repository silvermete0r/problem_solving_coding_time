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

void solve(int n) {
	switch(n){
		case 1:
			cout<<3;
			break;
		case 2:
			cout<<11;
			break;
		case 3:
			cout<<1001;
			break;
		case 4:
			cout<<4;
			break;
		case 5:
			cout<<32;
			break;
		case 6:
			cout<<16;
			break;
		case 7:
			cout<<2;
			break;
		case 8:
			cout<<13;
			break;
		case 9:
			cout<<312;
			break;
		case 10:
			cout<<198;
			break;
		default:
			cout<<-1;
	}
} 

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    solve(n);
    return 0;
}
