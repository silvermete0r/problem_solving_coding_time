#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long
#define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
 
using namespace std;

int fact(int n) {
	if(n<=1) return 1;
	return n*fact(n-1);
} 
 
int main() {
//	TxtIO;
	string a, b;
	cin>>a>>b;
	int n = a.size();
	int ap(0), am(0), bp(0), bm(0), bq(0);
	for(int i=0; i<n; i++) {
		if(a[i] == '+') ap++;
		else am++;
		if(b[i] == '+') bp++;
		else if(b[i] == '-') bm++;
		else bq++;	
	}
	cout.precision(12);
	if(bq == 0) {
		if(ap==bp && am==bm) cout<<fixed<<1.000000000000;
		else cout<<fixed<<0.000000000000;
	} else {
		int x = 0, y = 0;
		bm -= am;
		bp -= ap;
		while(bm!=0) {
			bm += (bm>0) ? -1 : 1;
			bq--;
			x++;
		}
		while(bp!=0) {
			bp += (bp>0) ? -1 : 1;
			bq--;
			y++;
		}
		if(bq == 0) {
			cout<<fixed<<(fact(x+y)/(1.0l*(fact(x)*fact(y)))) / (1.0l*(1<<(x+y)));
		} else {
			cout<<fixed<<0.000000000000;
		}
	}
    return 0;
}
