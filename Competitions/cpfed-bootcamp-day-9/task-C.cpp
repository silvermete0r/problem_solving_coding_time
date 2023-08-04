#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

void buildmin(ll node, ll start, ll end, ll treemin[], ll a[]) {
   if (start == end) {
      treemin[node] = a[start];
   } else {
      ll mid = (start + end) / 2;
      buildmin(2 * node + 1, start, mid, treemin, a);
      buildmin(2 * node + 2, mid + 1, end, treemin, a);
      treemin[node] = min(treemin[2 * node + 1], treemin[2 * node + 2]);
   }
}

ll querymin(ll node, ll start, ll end, ll l, ll r, ll treemin[]) {
   if (l > end || start > r) {
      return INT_MAX;
   }
   if (l <= start && r >= end) {
      return treemin[node];
   }
   ll q1, q2;
   ll mid = (start + end) / 2;
   q1 = querymin(2 * node + 1, start, mid, l, r, treemin);
   q2 = querymin(2 * node + 2, mid + 1, end, l, r, treemin);
   return (min(q1, q2));
}

void buildmax(ll node, ll start, ll end, ll treemax[], ll a[]) {
   if (start == end) {
      treemax[node] = a[start];
   } else {
      ll mid = (start + end) / 2;
      buildmax(2 * node + 1, start, mid, treemax, a);
      buildmax(2 * node + 2, mid + 1, end, treemax, a);
      treemax[node] = max(treemax[2 * node + 1], treemax[2 * node + 2]);
   }
}

ll querymax(ll node, ll start, ll end, ll l, ll r, ll treemax[]) {
   if (l > end || start > r) {
      return INT_MIN;
   }
   if (l <= start && r >= end) {
      return treemax[node];
   }
   ll q1, q2;
   ll mid = (start + end) / 2;
   q1 = querymax(2 * node + 1, start, mid, l, r, treemax);
   q2 = querymax(2 * node + 2, mid + 1, end, l, r, treemax);
   return (max(q1, q2));
}

int main() {
   ll n;
   cin >> n;
   ll treemin[4 * n];
   ll treemax[4 * n];
   ll a[n];
   for (ll i = 0; i < n; i++) cin >> a[i];
   buildmin(0, 0, n - 1, treemin, a);
   buildmax(0, 0, n - 1, treemax, a);
   ll q;
   cin >> q;
   ll sz = q;
   pair < ll, ll > ans[q];
   while (q > 0) {
      q--;
      ll x, y;
      cin >> x >> y;
      ans[q] = make_pair(querymin(0, 0, n - 1, x - 1, y - 1, treemin), querymax(0, 0, n - 1, x - 1, y - 1, treemax));
   }
   for (ll i = sz - 1; i >= 0; i--) cout << ans[i].first << " " << ans[i].second << "\n";
   return 0;
}
