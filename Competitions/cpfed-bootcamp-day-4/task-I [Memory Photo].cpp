#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long
#define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
 
using namespace std;
 
 
int main() {
//	TxtIO;
	int t, mx1 = 0;
	cin>>t;
	int arr[t][2];
	int ans[t];
	for(int i=0; i<t; i++) {
		cin>>arr[i][0]>>arr[i][1];
		if(arr[i][1] > arr[mx1][1]) mx1 = i;
	}
	int mx2 = (mx1 == 0) ? 1 : mx1 - 1;
	int sum_w = 0;
	for(int i=0; i<t; i++) {
		if(i!=mx1 && arr[i][1] > arr[mx2][1]) mx2 = i;
		sum_w += arr[i][0];
	}
	for(int i=0; i<t; i++) {
		if(i==mx1) {
			ans[i] = arr[mx2][1] * (sum_w - arr[i][0]);
		} else {
			ans[i] = arr[mx1][1] * (sum_w - arr[i][0]);
		}
	}
	for(int i=0; i<t; i++) {
		cout<<ans[i]<<" ";
	}
    return 0;
}
