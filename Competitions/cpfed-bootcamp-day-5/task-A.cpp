// https://codeforces.com/problemset/problem/500/A

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
	int n, t;
	cin>>n>>t;
	vector<int> vec(n);
	for(int i=1; i<n; i++) cin>>vec[i];
	int i = 1;
	string ans = "NO";
	while(i <= t) {
		if(i == t) {
			ans = "YES";
			break;
		}
		i += vec[i];
	}
	cout<<ans;
    return 0;
}
