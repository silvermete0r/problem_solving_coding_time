#include <bits/stdc++.h>
 
using namespace std;
 
long long totalSum(vector<long long> vec, int n) {
  sort(vec.begin(), vec.end());
  long long res = 0, sum = 0;
  for (int i = 0; i < n; i++) {
    res += (vec[i] * i - sum);
    sum += vec[i];
  }
  return res;
}
 
long long totalDistanceSum(vector<long long> xs, vector<long long> ys, int n) {
  return totalSum(xs, n) + totalSum(ys, n);
}
 
int main() {
  int n;
  cin >> n;
  vector<long long> xs(n), ys(n);
  for (int i = 0; i < n; i++) {
    cin >> xs[i] >> ys[i];
  }
  cout << (long long)totalDistanceSum(xs, ys, n);
  return 0;
}