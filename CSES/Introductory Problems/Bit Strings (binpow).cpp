#include <iostream>
 
using namespace std;
 
using ll = long long;
 
const unsigned int MOD = 1e9 + 7;
 
ll binpow(ll base, ll exp) {
    base %= MOD;
    ll res = 1;
    while(exp > 0) {
        if(exp & 1) res = res * base % MOD;
        base = base * base % MOD;
        exp >>= 1;
    }
    return res;
}
 
int main() {
    int n; cin>>n;
    cout<<binpow(2, n)<<"\n";
    return 0;
}
