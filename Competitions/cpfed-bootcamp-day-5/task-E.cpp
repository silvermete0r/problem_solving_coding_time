// https://codeforces.com/problemset/problem/939/A

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
	int n;
	cin>>n;
	vector<int> vec(n);
	for(int i=0; i<n; i++) cin>>vec[i];
	string ans = "NO";
	for(int x=0; x<n; x++) {
		if(x == vec[vec[vec[x]-1]-1]-1) {
			ans = "YES"; 
			break;
		}
	}
	cout<<ans;
    return 0;
}
