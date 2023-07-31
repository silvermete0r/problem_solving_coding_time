// https://codeforces.com/problemset/problem/755/A

#include <bits/stdc++.h>
#include <fstream>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long
#define TxtIO freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
 
using namespace std;

bool isPrime(int n) {
	if(n == 1) return false;
	for(int i=2; i<=sqrt(n); i++) {
		if(n%i == 0) return false;
	}
	return true;
}

int main() {
//	TxtIO;
	int n;
	cin>>n;
	for(int i=1; i<1000; i++) {
		if(!isPrime(i*n+1)) {
			cout<<i;
			return 0;
		}
	}
    return 0;
}
