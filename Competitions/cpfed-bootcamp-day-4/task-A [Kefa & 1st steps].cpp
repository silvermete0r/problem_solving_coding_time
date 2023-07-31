#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

//ifstream cin("knight.in");
//ofstream cout("knight.out");

int solve(int *arr, int n) {
	int ans = 1, cur = 1;
	for(int i=1; i<n; i++) {
		if(arr[i]>=arr[i-1]) cur++;
		else {
			if(cur>ans) ans = cur;
			cur = 1;
		}
	}
	if(cur > ans) ans = cur;
	return ans;
}


int main() {
	int n;
	cin>>n;
	int arr[n+1];
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	cout<<solve(arr, n);
    return 0;
}
