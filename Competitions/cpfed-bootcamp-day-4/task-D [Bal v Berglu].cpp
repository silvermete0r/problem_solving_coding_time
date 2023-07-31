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
	int n, m;
	cin>>n;
	vector<int> boys(n);
	for(int i=0; i<n; i++) cin>>boys[i];
	cin>>m;
	vector<int> girls(m);
	for(int i=0; i<m; i++) cin>>girls[i];
	sort(boys.begin(), boys.end());
	sort(girls.begin(), girls.end());
	int x=0, y=0, ans=0;
	while(x<n && y<m) {
		if(abs(boys[x]-girls[y])<=1) {
			ans++;
			x++;
			y++;
		} else if(boys[x] < girls[y]) x++;
		else {
			y++;
		}
	}
	cout<<ans;
    return 0;
}
