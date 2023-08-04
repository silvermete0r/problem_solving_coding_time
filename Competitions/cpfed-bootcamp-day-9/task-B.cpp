#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

void build(ll node, ll start, ll end, ll * tree, ll * a) {
   if (start == end) {
      tree[node] = a[start];
   } else {
      ll mid = (start + end) / 2;
      build(2 * node + 1, start, mid, tree, a);
      build(2 * node + 2, mid + 1, end, tree, a);
      tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
   }
}

void update(ll node, ll start, ll end, ll idx, ll val, ll * tree, ll * a) {
   if (start == end) {
      a[idx] = val;
      tree[node] = val;
   } else {
      int mid = (start + end) / 2;
      if (idx >= start && idx <= mid) {
         update(2 * node + 1, start, mid, idx, val, tree, a);
      } else {
         update(2 * node + 2, mid + 1, end, idx, val, tree, a);
      }
      tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
   }
}

ll query(ll node, ll start, ll end, ll l, ll r, ll * tree) {
   if (l > end || start > r) {
      return 0;
   }
   if (l <= start && r >= end) {
      return tree[node];
   }
   ll q1, q2;
   ll mid = (start + end) / 2;
   q1 = query(2 * node + 1, start, mid, l, r, tree);
   q2 = query(2 * node + 2, mid + 1, end, l, r, tree);
   return q1 + q2;
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
   vector < ll > ans;
   while (q > 0) {
      q--;
      ll type;
      cin >> type;
      ll x, y;
      cin >> x >> y;
      if (type == 1) {
         update(0, 0, n - 1, x - 1, y, tree, a);
      } else if (type == 2) {
         ans.push_back(query(0, 0, n - 1, x - 1, y - 1, tree));
      }
   }
   for (auto a: ans) cout << a << "\n";
   return 0;
}
