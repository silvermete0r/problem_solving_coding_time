// https://codeforces.com/problemset/problem/1055/A

#include <bits/stdc++.h>
#include <fstream>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long
#define TxtIO freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
 
using namespace std;

int main() {
//	TxtIO;
	int n, k;
	cin>>n>>k;
	vector<int> a(n), b(n);
	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<n; i++) cin>>b[i];
	bool ans = false;
	if(a[0] && (a[k-1] || b[k-1])) {
		if(a[k-1]) ans = true;
		else {
			for(int i=k; i<n; i++) {
				if(a[i] && b[i]) {
					ans = true;
					break;
				}
			}
		}
	}
	if(ans) cout<<"YES";
	else cout<<"NO";
    return 0;
}
