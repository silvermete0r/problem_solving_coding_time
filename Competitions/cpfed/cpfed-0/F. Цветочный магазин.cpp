#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  int n, k;
  cin >> n >> k;
  long long min_val = 0;
  vector<long long> types(n);
  for (int i = 0; i < n; i++) {
    cin >> types[i];
  }
  for (int i = 0; i <= n - k; i++) {
    types[i + k - 1] += min_val;
    if(i == 0 || types[i-1] == min_val) {
      min_val = *min_element(types.begin() + i, types.begin() + i + k);
    }
  }
  cout << min_val;
  return 0;
}