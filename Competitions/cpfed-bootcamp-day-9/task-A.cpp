#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

void build(ll node, ll start, ll end, ll tree[], ll a[]) {
   if (start == end) {
      tree[node] = a[start];
   } else {
      ll mid = (start + end) / 2;
      build(2 * node + 1, start, mid, tree, a);
      build(2 * node + 2, mid + 1, end, tree, a);
      tree[node] = min(tree[2 * node + 1], tree[2 * node + 2]);
   }
}

ll query(ll node, ll start, ll end, ll l, ll r, ll tree[]) {
   if (l > end || start > r) {
      return INT_MAX;
   }
   if (l <= start && r >= end) {
      return tree[node];
   }
   ll q1, q2;
   ll mid = (start + end) / 2;
   q1 = query(2 * node + 1, start, mid, l, r, tree);
   q2 = query(2 * node + 2, mid + 1, end, l, r, tree);
   return (min(q1, q2));
}

int main() {
   ll n;
   cin >> n;
   ll tree[4 * n];
   ll a[n];
   for (ll i = 0; i < n; i++) cin >> a[i];
   build(0, 0, n - 1, tree, a);
   ll q;
   cin >> q;
   ll sz = q;
   ll ans[q];
   while (q > 0) {
      q--;
      ll x, y;
      cin >> x >> y;
      ans[q] = query(0, 0, n - 1, x - 1, y - 1, tree);
   }
   for (ll i = sz - 1; i >= 0; i--) cout << ans[i] << "\n";
   return 0;
}
