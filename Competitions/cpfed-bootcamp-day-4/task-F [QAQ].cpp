#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

//ifstream cin("knight.in");
//ofstream cout("knight.out");

int solve(string s) {
	int n = s.size(), ans = 0;
	for(int i=0; i<n-2; i++) {
		if(s[i] == 'Q') {
			for(int j=i+1; j<n-1; j++) {
				if(s[j] == 'A') {
					for(int k=j+1; k<n; k++) {
						if(s[k] == 'Q') ans++;
					}
				}
			}
		}
	}
	return ans;
}


int main() {
	string s;
	cin>>s;
	cout<<solve(s);
    return 0;
}
