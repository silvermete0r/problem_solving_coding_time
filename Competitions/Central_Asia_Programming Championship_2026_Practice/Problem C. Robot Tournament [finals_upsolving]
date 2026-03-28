/*
@silvermete0r
*/

#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define ll long long
#define TxtIO freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);

const int PI = 3.1415926535897932384626433832795;
const int MOD = 1e9 + 7;
const int INF = 1e9 + 7;
const int N = 1e9; 

using namespace std;

/* NOTES:

*/

bool wins(vector<int>& a, vector<int>& b) {
	int w = 0;
	for(int i=0; i<3; i++) {
		w += int(a[i] > b[i]);
	}
	return bool(w >= 2);
}

vector<int> get_winner(vector<vector<int>> vec) {
	while(vec.size() != 1) {
		vector<vector<int>> new_vec;
		for(int i=0; i<vec.size(); i+=2) {
			if(wins(vec[i], vec[i+1])) {
				new_vec.push_back(vec[i]);
			} else {
				new_vec.push_back(vec[i+1]);
			}
		}
		vec = new_vec;
	}
	return vec[0];
}

void solve() {
	int n; cin>>n; // n <= 2^17 ~ 131,072
	vector<vector<int>> vec;
	vector<int> first_case, second_case;
	for(int i=0; i<n; i++) {
		int a, b, c;
		cin>>a>>b>>c;
		vec.push_back({a, b, c, i + 1});
		first_case.push_back(i + 1);
	}
	vector<int> first_winner = get_winner(vec);
	vector<int> second_winner;
	for(int i=0; i<n; i++) {
		if(first_winner.back() == vec[i].back()) continue;
		if(!wins(first_winner, vec[i])) {
			second_winner = vec[i];
			break;
		}
	}
	if(second_winner.empty()) {
		cout<<"NO\n";
		return;
	}
	vector<vector<int>> new_vec;
	new_vec.push_back(first_winner);
	new_vec.push_back(second_winner);
	second_case = {first_winner.back(), second_winner.back()};
	for(int i=0; i<n; i++) {
		if(vec[i].back() == first_winner.back() || vec[i].back() == second_winner.back()) continue;
		new_vec.push_back(vec[i]);
		second_case.push_back(vec[i].back());
	}
	second_winner = get_winner(new_vec);
	cout<<"YES\n";
	cout<<first_winner.back()<<" "<<second_winner.back()<<"\n";
	for(int& e : first_case) cout<<e<<" ";
	cout<<"\n";
	for(int& e : second_case) cout<<e<<" ";
	cout<<"\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //	TxtIO;
	int t = 1;
	cin>>t;
	while(t--) solve();
    return 0;
}
