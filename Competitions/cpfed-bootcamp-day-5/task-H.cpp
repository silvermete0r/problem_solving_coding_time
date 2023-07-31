// https://codeforces.com/problemset/problem/910/A

#include <bits/stdc++.h>
#include <fstream>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long
#define TxtIO freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
 
using namespace std;

int solve(string s, int n, int d) {
	int x = 0, ans = 0;
	if(d >= n || n == 2) return 1;
	while(x < n) {
		bool isGo = false;
		if(x == n-1) return ans;
		for(int j=d; j>=1; j--) {
			if(x+j<n && s[x+j]!='0') {
				ans++;
				x += j;
				isGo = true;
				break;
			}
		}
		if(!isGo) return -1; 
	}
	return -1;
}

int main() {
//	TxtIO;
	int n, d;
	cin>>n>>d;
	string s;
	cin>>s;
	cout<<solve(s, n, d);
    return 0;
}
