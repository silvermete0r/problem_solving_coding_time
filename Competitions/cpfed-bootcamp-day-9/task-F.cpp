#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main() {
   ll n, k;
   cin >> n >> k;
   vector < ll > row(n);
   ll ans = 0;
   for (ll x = 0; x < k; x++) {
      vector < ll > dp(10001);
      for (ll i = 0; i < n; i++) {
         ll h;
         cin >> h;
         for (ll j = 0; j < h; j++) dp[j]++;
         ans += dp[h];
      }
   }
   cout << ans;
   return 0;
}
