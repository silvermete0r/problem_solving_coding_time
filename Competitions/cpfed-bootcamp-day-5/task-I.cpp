// https://codeforces.com/problemset/problem/1598/A

#include <bits/stdc++.h>
#include <fstream>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long
#define TxtIO freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
 
using namespace std;

bool solve(string a, string b, int n) {
	for(int i=0; i<n; i++) if(a[i] == '1' && b[i] == '1') return false;
	return true;
}

int main() {
//	TxtIO;
	int t;
	cin>>t;
	vector<string> ans(t);
	for(int i=0; i<t; i++) {
		int n; 
		cin>>n;
		string a, b;
		cin>>a>>b;
		ans[i] = (solve(a, b, n)) ? "YES" : "NO"; 
	}
	for(auto a : ans) {
		cout<<a<<"\n";
	}
    return 0;
}
