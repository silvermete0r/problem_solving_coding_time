#include <bits/stdc++.h>
 
using namespace std;
 
int gray_code(int n) {
    return n ^ (n >> 1);
}
 
string get_suffix(string s, int n) {
    return s.substr(s.size() - n, n);
} 
 
void solve() {
    int n; cin>>n;
    int k = binpow(2, n);
    for(int i=0; i<k; i++) {
        int g = gray_code(i);
        bitset<16> bits(g);
        cout<<get_suffix(bits.to_string(), n)<<"\n";
    }
}
 
int main() {
    int t = 1;
    // cin>>t;
    while(t--) solve();
    return 0;
}
