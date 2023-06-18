#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))
 
int solve(string s) {
    int n = s.size(), cnt = 0;
    if (n < 6) return 0;
    for (int i = 1; i <= n / 3; i++) {
        string str = s.substr(0, i);
        if (s.substr(n - i, i) != str) continue;
        string new_s = s.substr(i, n - 2 * i);
//        cout<<"new_s: "<<new_s<<"\n";
        for (int j = n - 2 * i; j >= i; j--) {
//        	cout<<"s.substr(j, i): "<<s.substr(j, i)<<"\n";
            if (s.substr(j, i) == str) {
                string ST = s.substr(i, j - i);
//                cout<<"ST: "<<ST<<"\n";
                string N = s.substr(j + i, n - j - 2 * i);
//                cout<<"N: "<<N<<"\n";
                int sz = ST.size();
                for (int k = 1; k < sz; k++) {
                    string S = ST.substr(0, k);
//                    cout<<"S: "<<S<<"\n";
                    string T = ST.substr(k, sz - k);
//                    cout<<"T: "<<T<<"\n";
                    if (S != T && T != N && S != N && S != str && T != str && N != str) cnt++;
                }
            }
        }
    }
    return cnt;
}
 
 
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    cout<<solve(s);
    return 0;
}
